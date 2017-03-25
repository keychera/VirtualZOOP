
/**
 * @file	cage.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration for Cage
 */

/**
 * @class	Cage
 * @brief	class to define cage for a defined size of cells in a zoo
 */
class Cage{
    /**
	 default construstor
	 this will set size, NAnimal, Animals, and area to 0 and habitat to ""
	 */
    public Cage();
       /**
	 * @brief construstor with parameter
	 * this will set NAnimal to 0, size to _size, habitat to hab, Animals and area
     * @param habitat
     * @param size
	 */
    public Cage(String hab, int size);
    /**
	 * @brief getter for size
     * @return int
	 */
    public Integer GetSize();
    /**
	 * @brief getter area
     * @return Location*
	 */
    public Location* GetArea();
    /**
	 * @brief cage's animals Movement manager
	 * this will change animal in cage position
     * @return void
		 */
    public void MovementManager();
        /**
	 * @brief function to get location after animal A Move 
	 * this will return location for 1:Move up, 2:Move right, 3:Move down, 4:Move left
     * @return Location
	 */
    public Location Move(Animal* A,int i);
    /**
	 * @brief check location from animal
	 * this will check if there's animal in location L
     * @param Location
     * @return bool
	 */
    public boolean IsThereAnimal(Location& L);
        /**
	 * @brief check location in cage
	 * this will check if location L is inside cage
         * @param Location
         * @return bool
		 */
    public boolean IsInCage(Location& L);
        /**
	 * @brief void to add animal to cage
         * @param Animal*
         * @return void 
	 */
    public void AddAnimal(Animal* A);
        /**
	 * @brief getter untul Animals
         * @return Animal**
	 */
    public Animal** GetAnimals();
        /**
	 * @brief getter untul NAnimal
         * @return int
	 */
    public Integer GetNAnimal();
        /**
	 * @brief getter untul habitat
         * @return const char*
	 */
    const String GetHabitat();
    private Animal** Animals;       ///< array of Animal* in Cage
    private Integer NAnimal;            ///< number of Animal in Cage
    private const char* habitat;    ///< habitat of the Cage
    private const int size;         ///< size of Cage
    private Location* area;         ///< array of Location of Cage
};
