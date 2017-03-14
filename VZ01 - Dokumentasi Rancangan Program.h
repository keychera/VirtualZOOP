Renderable
	+ Render

Location
	+ getX
	+ getY
	+ setX
	+ setY
	- int x
	- int y

Cell
	- Location

Facility
    + render
    + getName
    + setName
    - Cell

Road
    + render
    - Facility

Entrance
    + render
    + getEntranceNumber
    - EntranceNumber
    - Road

Exit
    + render
    + getExitNumber
	- ExitNumber
	- Road

Restaurant
    + render
    + getName
    + setName
    - RestName
    - Facility

Park
    + render
    + getName
    + setName
    - parkname
    - Facility

Habitat
    + gethabitat
    - Cell

LandHabitat
    + render
    + gethabitat
	- habitat

WaterHabitat
	+ render
	+ gethabitat
	- habitat

AirHabitat
	+ render
	+ gethabitat
	- habitat

AnimalHabitat
	+ IsLand
	+ IsWater
	+ IsFlying
	- land
	- water
	- flying

AnimalClassification
	+ GetFamily
	+ GetGenus
	+ GetSpecies
	- family
	- genus
	- species

Cat 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Cheetah 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Lion 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Leopard 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Tiger 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Beluga 
	+ Interact
	+ Render
	- Animal

Narwhal 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Dolphin 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Orca 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Clownfish 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Damselfish 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Coyote 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Wolf 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

RedFox 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

ArcticFox 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Komodo 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Biawak 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

BadakJawa 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

BadakSumatra 
	+ Interact 
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

BaldEagle 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

GoldenEagle 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

RedKite 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

BlackKite 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Axolotl 
	+ Interact
	+ Render
	- AnimalHabitat
	- AnimalClassification
	- Location

Cage 
	+ getHabitat
	+ getsize
	+ getArea
	+ AddAnimal
	+ getAnimals
	+ getNAnimal
	+ gethabitat
    - Animals
    - NAnimal
    - habitat
    - size
    - area