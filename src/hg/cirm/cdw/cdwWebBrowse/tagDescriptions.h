"access  controls who can access file.  \n",
"accession  A unique, license-plate-like identifier for a file\n",
"assay     One of the genomics assays\n",
"body_part   Free text description of part of body sample is taken from\n",
"cdw_file_name   File name in big data warehouse relative to cdw root dir\n",
"cell_line  Name of cell line if any (before differentiation protocols if any)\n",
"chrom If the file just refers to a single chromosome, that chromosome name is here  \n",
"data_set_id   Id that groups together a set of data under the same title\n",
"enriched_in  Genomic regions where the expectation is the data will be concentrated as defined in the enrichment table\n",
"enrichment_chrX   Ratio of coverage on X chromosome vs. genome as a whole\n",
"enrichment_chrY   Ratio of coverage on Y chromosome vs. genome as a whole\n",
"enrichment_common_snp  Ratio of coverage on commonly occurring (>1% of population) SNP loci to genome as a whole\n",
"enrichment_exon   exons whether coding or noncoding\n",
"enrichment_promoter    From -100 to +50 bases relative to transcription start site\n",
"file_id   Numerical identifier for file,  generally you'll use accession instead\n",
"file_name   Name of file including extensions but without directory.  Based on accession.\n",
"file_size   Size of file in bytes\n",
"format    One of the file formats in the format table\n",
"item_count   # of items in file: reads for fastqs, lines for beds, bases w/data for wig.\n",
"keywords   words used to mark and find data set\n",
"lab   account name of submitting lab or other group\n",
"map_ratio   Proportion of items that map to genome\n",
"map_target_base_count   Count of bases in mapping target\n",
"map_target_seq_count   Number of chromosomes or other distinct sequences in mapping target\n",
"md5    MD5 sum of file\n",
"meta    used in tab-separated metadata files to connect to additional metadata in a tagStorm file\n",
"output  For pipelines with multiple outputs, this says which of the outputs in the pipeline protocol file this is\n",
"paired_end_reads   For paired end fastq files put '1' for first read, '2' for second\n",
"pipeline  Protocol file describing pipeline that leads to this file\n",
"read_size   Length of a read in file.\n",
"replicate   For replicated experiments which one this is\n",
"seq_depth    How deep on average the genome is covered by items.\n",
"seq_sample  Groups together sets of files from a logical sequencing run on a sample.  Used with file_part and paired_end tags\n",
"sorted_by_target    If set to 1, then file is sorted by chromosome and position within chromosome\n",
"species   Binomial scientific name of species sample taken from \n",
"submit_dir    directory (relative to system submission root) where submitted from\n",
"submit_file_name    File name in submit relative to submit dir\n",
"submitter   account name of person submitting data set\n",
"title   Brief description of purpose of experimental data set\n",
"u4m_unique_ratio  u4mUniqPos/u4mReadCount - measures library diversity\n",
"ucsc_db   UCSC assembly database identifier for reference genome used in mapping.  Either hg19, hg38, mm9, or mm10\n",
"vcf_common_snp_ratio Proportion of data in file that overlaps common snps occuring in 1% or more of population\n",
"vcf_dp The depth of sequencing in the bam or other alignment file used to produce this VCF.  Should be 30 or more.\n",
"vcf_genotype_count   How many genotypes of data\n",
"vcf_pass_ratio    Proportion of VCF records that pass quality filter\n",
"vcf_snp_ratio	Proportion of VCF records that are single nucleotide subsitutions as opposed to larger changes or indels\n",