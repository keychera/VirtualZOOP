#include "cell.h"

class Zoo {
    public:
        Zoo();
        Zoo(int w, int l);
        Zoo(const Zoo& z);
        ~Zoo();
        Zoo& operator= (const Zoo& Z);
    protected:
        Cell** Cells;
        const int width;
        const int length;
};
