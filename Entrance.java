/**
 * @class	Entrance
 * @brief	class to define Road as Entrance
 */
class Entrance extends Road{
   /**
    * @brief default constructor
    * construct Road
    */
    public Entrance();
   /**
    * @brief function of type getter
    * this will return "Entrance"
    * @return char*
    */
    public String GetType();
   /**
    * @brief fuction to print 
    * this will return "E"
    * @return void
    */
    public void Render();
};
