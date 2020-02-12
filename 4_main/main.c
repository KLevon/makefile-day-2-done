
#include "add.h"
#include "sub.h"
#include "printer.h"
#include "shower.h"
#include "nothing.h"
#include "everything.h"

void main()
{
	int addition = 0;
	int substraction = 0;
	addition = add(4, 5);
	substraction = sub(15, 9);
	print(addition);
	print(substraction);
	show_all(addition, substraction);
	do_everything();
	do_nothing();
}

