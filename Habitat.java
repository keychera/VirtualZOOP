/**
 * @file	habitat.h
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration Habitat
 */

/**
 * @class	Habitat
 * @brief	acstract class of Habitat as one of Cell
 */
abstract class Habitat extends Cell{
    /**
	 * @brief default construstor
	 * this will construct Cell
	 */
    public Habitat();
        /**
	 * @brief name getter
	 * this will return "habitat"
         * @return char*
		 */
    public String GetName();
        /**
	 * @brief pure virtual function for type getter
	 */
    abstract String GetType();
};
