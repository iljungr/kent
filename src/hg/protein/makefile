kentSrc = ../..
# Build all directories in utils

include ../../inc/common.mk

DIRS = \
	blastRecipBest \
	gadPos \
	hmmPfamToTab \
	kgAliasM \
	kgAliasP \
	kgAliasKgXref \
	kgAliasRefseq \
	kgProtAlias \
	kgProtAliasNCBI \
	kgBestMrna2 \
	kgBestRef2 \
	kgCheck \
	kgGetCds \
	kgGetPep \
	kgPepMrna \
	kgPick \
	kgPutBack \
	kgXref \
	kgXref2 \
	pbCalDist \
	pbCalDistGlobal \
	pbCalPi \
	pbCalResStd \
	pbCalResStdGlobal \
	pbHgnc \
	pfamXref \
	rmKGPepMrna \
	scopCollapse \
	spDbAddVarSplice \
	spOrganism \
	spTest \
	spToDb \
	spLoadPsiBlast \
	spLoadRankProp \
	spToProteinsVar \
	spToSpXref2 \
	spXref3 \
	spm3 \
	spm6 \
	spm7 \
	spToProteins
USE_DIRS = $(DIRS)

TEST_DIRS = \
	spToDb

all::    utils

utils: $(USE_DIRS:%=%.utils)

%.utils:
	(cd $* && echo $* && $(MAKE))

test::	${TEST_DIRS:%=%.test}
%.test:
	(cd $* && ${MAKE} test)

# List of directories to build

clean: $(USE_DIRS:%=%.clean)

%.clean:
	(cd $* && $(MAKE) clean)


# no makefile for:
#       pfamXref
#	spXref2


