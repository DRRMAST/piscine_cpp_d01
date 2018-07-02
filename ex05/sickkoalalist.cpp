#include <iostream>
#include "sickkoalalist.h"
#include "sickkoala.h"
class SickKoalaList
{
	public:
		SickKoalaList(SickKoalaList *p);
		bool isEnd();
		
	private:
		SickKoala *node;
		SickKoalaList *next;
};
SickKoalaList::SickKoalaList(SickKoalaList *p)
{
	
}
