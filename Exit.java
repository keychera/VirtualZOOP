
/**
 * @class	Exit
 * @brief	class to define Road as Exit
 */
class Exit extends Road{
   /**
    * @brief default constructor
    * construct Road
    */
     public Exit();
   /**
    * @brief fuction to print 
    * this will return "@"
    * @return void
    */
     public void Render();
   /**
    * @brief function of type getter
    * this will return "Exit"
    * @return char*
		 */
     public String GetType();
};
