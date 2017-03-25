/**
 * @file	facility.java
 * @author	Harum Lokawati
 * @date	March 2017
 * @version VZ03
 * 
 * @brief	the header file containing class declaration facility
 */

/**
 * @class	Facility
 * @brief	acstract class of Facility as one of Cell type
 */
abstract class Facility extends Cell{
   /**
    * @brief default construstor
    * construct Cell
    */
    public Facility();
   /**
    * @brief pure virtual function getter for type
    */
    abstract public String GetType()=0;
   /**
    * @brief name getter
    * this will return "facility"
    * @return char*
    */
    public String GetName();
};
