/* methylateGenome - Creates a methylated version of an input genome, in which any occurance of CG becomes TG. */
#include "common.h"
#include "linefile.h"
#include "hash.h"
#include "options.h"
#include "dnautil.h"
#include "dnaLoad.h"
#include "dnaseq.h"
#include "fa.h"

void usage()
/* Explain usage and exit. */
{
errAbort(
  "methylateGenome - Creates a methylated version of a genome, in which any occurance of CG becomes TG\n"
  "usage:\n"
  "   methylateGenome input output.fa\n"
  "options:\n"
  "   -xxx=XXX\n"
  );
}

/* Command line validation table. */
static struct optionSpec options[] = {
   {NULL, 0},
};

void methylateGenome(char *fileName, char *outputName)
/* methylateGenome - Creates a methylated version of an input genome, in which any occurance of CG becomes TG. */
{
// Open input and output files
struct dnaLoad *dl = dnaLoadOpen(fileName);
FILE *f = mustOpen(outputName, "w");

// Loop over every line in the input file...
struct dnaSeq *seq = NULL;
for (;;)
    {
    // Take every line in the file, break when we're done
    seq = dnaLoadNext(dl);
    if (seq == NULL)
        break;
      
    // Replace all 'CG' (or 'cg') with 'TG' (or 'tg')
    int end = seq->size - 1;
    int i;
    for (i = 0; i < end; ++i)
        {
        char b1 = seq->dna[i];
        int v1 = ntVal[(unsigned)b1];
        int v2 = ntVal[(unsigned)seq->dna[i+1]];
        
        if (v1 == C_BASE_VAL && v2 == G_BASE_VAL)
            {
            if (b1 == 'C')
                seq->dna[i] = 'T';
            else
                seq->dna[i] = 't';
            }
        }
    
    // Write out the modified line
    faWriteNext(f, seq->name, seq->dna, seq->size);
    }
    
if (fclose(f) != 0)
    errnoAbort("fclose failed");
}

int main(int argc, char *argv[])
/* Process command line. */
{
optionInit(&argc, argv, options);
if (argc != 3)
    usage();
dnaUtilOpen();
methylateGenome(argv[1], argv[2]);
return 0;
}