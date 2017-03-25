
/**
 * @class	Road
 * @brief	class to define Facility as Road
 */
class Road extends Facility{
   /**
    * @brief default constructor
    * construct Facility
    */
    public Road();
   /**
    * @brief virtual function of type getter
    * this will return "Road"
    * @return char*
    */
    public String GetType();  
   /**
    * @brief virtual fuction to print 
    * this will return " "
    * @return void
    */
    public void Render();
};
