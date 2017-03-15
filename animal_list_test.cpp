#include "animal_list.h"
#include <gtest/gtest.h>

class AnimalListTest : public ::testing::Test {
  protected:
    AnimalListTest(){}
};

TEST(AnimalListTest, GetFamily) {
  Cat cat;
  Cheetah cheetah;
  Lion lion;
  Leopard leopard;
  Tiger tiger;
  Beluga beluga;
  Narwhal narwhal;
  Dolphin dolphin;
  Orca orca;
  Clownfish clownfish;
  Damselfish damselfish;
  Coyote coyote;
  Wolf wolf;
  RedFox redfox;
  ArcticFox arcticfox;
  Komodo komodo;
  Biawak biawak;
  BadakJawa badakjawa;
  BadakSumatra badaksumatra;
  BaldEagle baldeagle;
  GoldenEagle goldeneagle;
  RedKite redkite;
  BlackKite blackkite;
  Axolotl axolotl;
  
  ASSERT_EQ(0,strcmp("Felidae",cat.GetFamily()));
  ASSERT_EQ(0,strcmp("Felidae",cheetah.GetFamily()));
  ASSERT_EQ(0,strcmp("Felidae",lion.GetFamily()));
  ASSERT_EQ(0,strcmp("Felidae",leopard.GetFamily()));
  ASSERT_EQ(0,strcmp("Felidae",tiger.GetFamily()));
  ASSERT_EQ(0,strcmp("Monodontidae",beluga.GetFamily()));
  ASSERT_EQ(0,strcmp("Monodontidae",narwhal.GetFamily()));
  ASSERT_EQ(0,strcmp("Delphinidae",dolphin.GetFamily()));
  ASSERT_EQ(0,strcmp("Delphinidae",orca.GetFamily()));
  ASSERT_EQ(0,strcmp("Pomacentridae",clownfish.GetFamily()));
  ASSERT_EQ(0,strcmp("Pomacentridae",damselfish.GetFamily()));
  ASSERT_EQ(0,strcmp("Canidae",coyote.GetFamily()));
  ASSERT_EQ(0,strcmp("Canidae",wolf.GetFamily()));
  ASSERT_EQ(0,strcmp("Canidae",redfox.GetFamily()));
  ASSERT_EQ(0,strcmp("Canidae",arcticfox.GetFamily()));
  ASSERT_EQ(0,strcmp("Varanidae",komodo.GetFamily()));
  ASSERT_EQ(0,strcmp("Varanidae",biawak.GetFamily()));
  ASSERT_EQ(0,strcmp("Rhinocerotidae",badakjawa.GetFamily()));
  ASSERT_EQ(0,strcmp("Rhinocerotidae",badaksumatra.GetFamily()));
  ASSERT_EQ(0,strcmp("Accipitridae",baldeagle.GetFamily()));
  ASSERT_EQ(0,strcmp("Accipitridae",goldeneagle.GetFamily()));
  ASSERT_EQ(0,strcmp("Accipitridae",redkite.GetFamily()));
  ASSERT_EQ(0,strcmp("Accipitridae",blackkite.GetFamily()));
  ASSERT_EQ(0,strcmp("Ambystomatidae",axolotl.GetFamily()));
}

TEST(AnimalListTest, GetGenus) {  
  Cat cat;
  Cheetah cheetah;
  Lion lion;
  Leopard leopard;
  Tiger tiger;
  Beluga beluga;
  Narwhal narwhal;
  Dolphin dolphin;
  Orca orca;
  Clownfish clownfish;
  Damselfish damselfish;
  Coyote coyote;
  Wolf wolf;
  RedFox redfox;
  ArcticFox arcticfox;
  Komodo komodo;
  Biawak biawak;
  BadakJawa badakjawa;
  BadakSumatra badaksumatra;
  BaldEagle baldeagle;
  GoldenEagle goldeneagle;
  RedKite redkite;
  BlackKite blackkite;
  Axolotl axolotl;
  

  ASSERT_EQ(0,strcmp("Felis",cat.GetGenus()));
  ASSERT_EQ(0,strcmp("Acinonyx",cheetah.GetGenus()));
  ASSERT_EQ(0,strcmp("Panthera",lion.GetGenus()));
  ASSERT_EQ(0,strcmp("Panthera",leopard.GetGenus()));
  ASSERT_EQ(0,strcmp("Panthera",tiger.GetGenus()));
  ASSERT_EQ(0,strcmp("Delphinapterus",beluga.GetGenus()));
  ASSERT_EQ(0,strcmp("Monodon",narwhal.GetGenus()));
  ASSERT_EQ(0,strcmp("Delphinus",dolphin.GetGenus()));
  ASSERT_EQ(0,strcmp("Orcinus",orca.GetGenus()));
  ASSERT_EQ(0,strcmp("Ocellaris",clownfish.GetGenus()));
  ASSERT_EQ(0,strcmp("Stegastes",damselfish.GetGenus()));
  ASSERT_EQ(0,strcmp("Canis",coyote.GetGenus()));
  ASSERT_EQ(0,strcmp("Canis",wolf.GetGenus()));
  ASSERT_EQ(0,strcmp("Vulpes",redfox.GetGenus()));
  ASSERT_EQ(0,strcmp("Vulpes",arcticfox.GetGenus()));
  ASSERT_EQ(0,strcmp("Varanus",komodo.GetGenus()));
  ASSERT_EQ(0,strcmp("Varanus",biawak.GetGenus()));
  ASSERT_EQ(0,strcmp("Rhinoceros",badakjawa.GetGenus()));
  ASSERT_EQ(0,strcmp("Dicerorhinus",badaksumatra.GetGenus()));
  ASSERT_EQ(0,strcmp("Haliaeetus",baldeagle.GetGenus()));
  ASSERT_EQ(0,strcmp("Aquila",goldeneagle.GetGenus()));
  ASSERT_EQ(0,strcmp("Milvus",redkite.GetGenus()));
  ASSERT_EQ(0,strcmp("Milvus",blackkite.GetGenus()));
  ASSERT_EQ(0,strcmp("Ambystoma",axolotl.GetGenus()));
}

TEST(AnimalListTest, GetSpecies) {  

  Cat cat;
  Cheetah cheetah;
  Lion lion;
  Leopard leopard;
  Tiger tiger;
  Beluga beluga;
  Narwhal narwhal;
  Dolphin dolphin;
  Orca orca;
  Clownfish clownfish;
  Damselfish damselfish;
  Coyote coyote;
  Wolf wolf;
  RedFox redfox;
  ArcticFox arcticfox;
  Komodo komodo;
  Biawak biawak;
  BadakJawa badakjawa;
  BadakSumatra badaksumatra;
  BaldEagle baldeagle;
  GoldenEagle goldeneagle;
  RedKite redkite;
  BlackKite blackkite;
  Axolotl axolotl;
  
  
  ASSERT_EQ(0,strcmp("catus",cat.GetSpecies()));
  ASSERT_EQ(0,strcmp("jubatus",cheetah.GetSpecies()));
  ASSERT_EQ(0,strcmp("leo",lion.GetSpecies()));
  ASSERT_EQ(0,strcmp("pardus",leopard.GetSpecies()));
  ASSERT_EQ(0,strcmp("tigris",tiger.GetSpecies()));
  ASSERT_EQ(0,strcmp("leucas",beluga.GetSpecies()));
  ASSERT_EQ(0,strcmp("monoceros",narwhal.GetSpecies()));
  ASSERT_EQ(0,strcmp("delphis",dolphin.GetSpecies()));
  ASSERT_EQ(0,strcmp("orca",orca.GetSpecies()));
  ASSERT_EQ(0,strcmp("clownfish",clownfish.GetSpecies()));
  ASSERT_EQ(0,strcmp("variabilis",damselfish.GetSpecies()));
  ASSERT_EQ(0,strcmp("latrans",coyote.GetSpecies()));
  ASSERT_EQ(0,strcmp("lupus",wolf.GetSpecies()));
  ASSERT_EQ(0,strcmp("vulpes",redfox.GetSpecies()));
  ASSERT_EQ(0,strcmp("lagopus",arcticfox.GetSpecies()));
  ASSERT_EQ(0,strcmp("komodoensis",komodo.GetSpecies()));
  ASSERT_EQ(0,strcmp("cerambonensis",biawak.GetSpecies()));
  ASSERT_EQ(0,strcmp("sondaicus",badakjawa.GetSpecies()));
  ASSERT_EQ(0,strcmp("sumatrensis",badaksumatra.GetSpecies()));
  ASSERT_EQ(0,strcmp("leucocephalus",baldeagle.GetSpecies()));
  ASSERT_EQ(0,strcmp("chrysaetos",goldeneagle.GetSpecies()));
  ASSERT_EQ(0,strcmp("milvus",redkite.GetSpecies()));
  ASSERT_EQ(0,strcmp("migrans",blackkite.GetSpecies()));
  ASSERT_EQ(0,strcmp("mexicanum",axolotl.GetSpecies()));
}

TEST(AnimalListTest, GetDiet) {
  
  Cat cat;
  Cheetah cheetah;
  Lion lion;
  Leopard leopard;
  Tiger tiger;
  Beluga beluga;
  Narwhal narwhal;
  Dolphin dolphin;
  Orca orca;
  Clownfish clownfish;
  Damselfish damselfish;
  Coyote coyote;
  Wolf wolf;
  RedFox redfox;
  ArcticFox arcticfox;
  Komodo komodo;
  Biawak biawak;
  BadakJawa badakjawa;
  BadakSumatra badaksumatra;
  BaldEagle baldeagle;
  GoldenEagle goldeneagle;
  RedKite redkite;
  BlackKite blackkite;
  Axolotl axolotl;
  
  
  ASSERT_EQ(true,cat.IsCarnivore());
  ASSERT_EQ(true,cheetah.IsCarnivore());
  ASSERT_EQ(true,lion.IsCarnivore());
  ASSERT_EQ(true,leopard.IsCarnivore());
  ASSERT_EQ(true,tiger.IsCarnivore());
  ASSERT_EQ(true,beluga.IsCarnivore());
  ASSERT_EQ(true,narwhal.IsCarnivore());
  ASSERT_EQ(true,dolphin.IsCarnivore());
  ASSERT_EQ(true,orca.IsCarnivore());
  ASSERT_EQ(true,clownfish.IsCarnivore());
  ASSERT_EQ(true,damselfish.IsCarnivore());
  ASSERT_EQ(true,coyote.IsCarnivore());
  ASSERT_EQ(true,wolf.IsCarnivore());
  ASSERT_EQ(true,redfox.IsCarnivore());
  ASSERT_EQ(true,arcticfox.IsCarnivore());
  ASSERT_EQ(true,komodo.IsCarnivore());
  ASSERT_EQ(true,biawak.IsCarnivore());
  ASSERT_EQ(true,badakjawa.IsHerbivore());
  ASSERT_EQ(true,badaksumatra.IsHerbivore());
  ASSERT_EQ(true,baldeagle.IsCarnivore());
  ASSERT_EQ(true,goldeneagle.IsCarnivore());
  ASSERT_EQ(true,redkite.IsCarnivore());
  ASSERT_EQ(true,blackkite.IsCarnivore());
  ASSERT_EQ(true,axolotl.IsCarnivore());
}


TEST(AnimalListTest, GetHabitat) {  
  
  Cat cat;
  Cheetah cheetah;
  Lion lion;
  Leopard leopard;
  Tiger tiger;
  Beluga beluga;
  Narwhal narwhal;
  Dolphin dolphin;
  Orca orca;
  Clownfish clownfish;
  Damselfish damselfish;
  Coyote coyote;
  Wolf wolf;
  RedFox redfox;
  ArcticFox arcticfox;
  Komodo komodo;
  Biawak biawak;
  BadakJawa badakjawa;
  BadakSumatra badaksumatra;
  BaldEagle baldeagle;
  GoldenEagle goldeneagle;
  RedKite redkite;
  BlackKite blackkite;
  Axolotl axolotl;
  
  
  ASSERT_EQ(true,cat.IsLand());
  ASSERT_EQ(true,cheetah.IsLand());
  ASSERT_EQ(true,lion.IsLand());
  ASSERT_EQ(true,leopard.IsLand());
  ASSERT_EQ(true,tiger.IsLand());
  ASSERT_EQ(true,beluga.IsWater());
  ASSERT_EQ(true,narwhal.IsWater());
  ASSERT_EQ(true,dolphin.IsWater());
  ASSERT_EQ(true,orca.IsWater());
  ASSERT_EQ(true,clownfish.IsWater());
  ASSERT_EQ(true,damselfish.IsWater());
  ASSERT_EQ(true,coyote.IsLand());
  ASSERT_EQ(true,wolf.IsLand());
  ASSERT_EQ(true,redfox.IsLand());
  ASSERT_EQ(true,arcticfox.IsLand());
  ASSERT_EQ(true,komodo.IsLand());
  ASSERT_EQ(true,biawak.IsLand());
  ASSERT_EQ(true,badakjawa.IsLand());
  ASSERT_EQ(true,badaksumatra.IsLand());
  ASSERT_EQ(true,baldeagle.IsFlying());
  ASSERT_EQ(true,goldeneagle.IsFlying());
  ASSERT_EQ(true,redkite.IsFlying());
  ASSERT_EQ(true,blackkite.IsFlying());
  ASSERT_EQ(true,(axolotl.IsLand() && axolotl.IsWater()));
}


TEST(AnimalListTest, CheckTameStatus) {
  
  Cat cat;
  Cheetah cheetah;
  Lion lion;
  Leopard leopard;
  Tiger tiger;
  Beluga beluga;
  Narwhal narwhal;
  Dolphin dolphin;
  Orca orca;
  Clownfish clownfish;
  Damselfish damselfish;
  Coyote coyote;
  Wolf wolf;
  RedFox redfox;
  ArcticFox arcticfox;
  Komodo komodo;
  Biawak biawak;
  BadakJawa badakjawa;
  BadakSumatra badaksumatra;
  BaldEagle baldeagle;
  GoldenEagle goldeneagle;
  RedKite redkite;
  BlackKite blackkite;
  Axolotl axolotl;
  
  
  ASSERT_EQ(true,cat.IsTame());
  ASSERT_EQ(false,cheetah.IsTame());
  ASSERT_EQ(false,lion.IsTame());
  ASSERT_EQ(false,leopard.IsTame());
  ASSERT_EQ(false,tiger.IsTame());
  ASSERT_EQ(true,beluga.IsTame());
  ASSERT_EQ(true,narwhal.IsTame());
  ASSERT_EQ(true,dolphin.IsTame());
  ASSERT_EQ(false,orca.IsTame());
  ASSERT_EQ(true,clownfish.IsTame());
  ASSERT_EQ(true,damselfish.IsTame());
  ASSERT_EQ(false,coyote.IsTame());
  ASSERT_EQ(false,wolf.IsTame());
  ASSERT_EQ(false,redfox.IsTame());
  ASSERT_EQ(false,arcticfox.IsTame());
  ASSERT_EQ(false,komodo.IsTame());
  ASSERT_EQ(false,biawak.IsTame());
  ASSERT_EQ(true,badakjawa.IsTame());
  ASSERT_EQ(true,badaksumatra.IsTame());
  ASSERT_EQ(false,baldeagle.IsTame());
  ASSERT_EQ(false,goldeneagle.IsTame());
  ASSERT_EQ(true,redkite.IsTame());
  ASSERT_EQ(true,blackkite.IsTame());
  ASSERT_EQ(true,axolotl.IsTame());
}
