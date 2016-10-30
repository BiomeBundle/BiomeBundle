Biome size is different to when "isle" or when "border"
If biome rarity is different to biome rarity when "isle"

##removed IsleInBiome: from

DesertTropical
FloatingIslands
FloatingPlains
Forest Wetland
ForestFirThicket
ForestOakSmall
FrozenOcean
Mega Spruce Taiga Hills
Mesa Small
MushroomIslandShore
RiverRoofedForest
Savanna Plateau M
TropicalPillars


##removed BiomeIsBorder: from

TemperatePlainsCypresshill

##input IsleInBiome: in

JungleEdge M (was borderbiome for JungleEdge shdb IsleinBiome)

##BiomeRarity different to IsleRarity: 

AlpsMountain2
AlpsMountainHighlands
BirchForestTropicalIsle2
Caverns+ M
DesertLowlandsOasis
FloatingHole
Ice Mountains
JungleAncientMountainTall
JungleAncientRocks
JungleLonePeak
JungleLowlands
JunglePlateau
JunglePlateauLow
Mesa (Bryce) Rocks
Mesa Plateau F M
MesaVerdeCanyonHigh
Monument
Ocean Island
OceanRocksM
RainforestBog
Savanna M
SnowyLonePeak
SteppeHill
SteppeRocks
Tropical Savanna Canyon Mid
TropicalPillarSmall


echo "# BiomeBundle3.0-1.10.2" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/LordSmellyPants/BiomeBundle3.0-1.10.2.git
git push -u origin master