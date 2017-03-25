/**
 * @class	Restaurant
 * @brief	class to define Facility as Restaurant
 */
class Restaurant extends Facility{
   /**
    * @brief default constructor
    * construct Facility
    */
    public Restaurant();
        /**
	* @brief fuction to print 
	* this will return "R"
        * @return void
		 */
    public void Render();
        /**
	* @brief function of type getter
	* this will return "Restaurant"
        * @return char*
		 */
    public String GetType();
};
