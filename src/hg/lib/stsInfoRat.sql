# stsInfoRat.sql was originally generated by the autoSql program, which also 
# generated stsInfoRat.c and stsInfoRat.h.  This creates the database representation of
# an object which can be loaded and saved from RAM in a fairly 
# automatic way.

#Constant STS marker information
CREATE TABLE stsInfoRat (
    identNo int unsigned not null,	# UCSC identification number
    name varchar(255) not null,	# Official UCSC name
    RGDId int unsigned not null,	# Marker's RGD Id
    RGDName varchar(255) not null,	# Marker's RGD name
    UiStsId int unsigned not null,	# Marker's UiStsId
    nameCount int unsigned not null,	# Number of alias
    alias varchar(255) not null,	# alias, or N/A
    primer1 varchar(255) not null,	# primer1 sequence
    primer2 varchar(255) not null,	# primer2 sequence
    distance varchar(255) not null,	# Length of STS sequence
    sequence int unsigned not null,	# Whether the full sequence is available (1) or not (0) for STS
    organis varchar(255) not null,	# Organism for which STS discovered
    fhhName varchar(255) not null,	# Name in FHH_x_ACI map
    fhhChr varchar(255) not null,	# Chromosome in Genetic map
    fhhGeneticPos float not null,	# Position in Genetic map
    shrspName varchar(255) not null,	# Name in SHRSP_x_BN
    shrspChr varchar(255) not null,	# Chromosome in Genetic map
    shrspGeneticPos float not null,	# Position in Genetic map
    rhName varchar(255) not null,	# Name in RH map
    rhChr varchar(255) not null,	# Chromosome in Genetic map
    rhGeneticPos float not null,	# Position in Genetic map.
    RHLOD float not null,	# LOD score of RH map
    GeneName varchar(255) not null,	# Associated gene name
    GeneID varchar(255) not null,	# Associated gene Id
    clone varchar(255) not null,	# Clone sequence
              #Indices
    PRIMARY KEY(identNo)
);
