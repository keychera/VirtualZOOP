class Location {
	public :
		Location();
		Location(const int, const int);

		Location getX();
		Location getY();
		Location setX();
		Location setY();
	private :
		int x;
		int y;
};