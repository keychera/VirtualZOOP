/**
 * @file	LandHabitat.java
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration LandHabitat
 */
/**
 * @class	LandHabitat
 * @brief	class to define Habitat as LandHabitat
 */
public class LandHabitat extend Habitat{
        /**
	 * @brief default construstor
	 * this will construct Habitat
	 */
    public LandHabitat();
       /**
	 * @brief fuction to print 
	 * this will return "l"
         * @return void
		 */
    public void Render();
        /**
	 * @brief type getter 
	 * this will return "LandHabitat"
         * @return char*
	 */
    public char* GetType();
};
