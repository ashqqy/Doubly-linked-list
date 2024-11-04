#include <stdio.h>

#include "DLList.h"

//-------------------------------------------------

int main ()
{
    FILE* dump_file = fopen ("dump.dot", "w");

    dllist_t dllist = {};
    DLListInit (&dllist);

    InsertEnd (&dllist, 10);
    InsertEnd (&dllist, 20);
    InsertEnd (&dllist, 30);
    InsertEnd (&dllist, 40);
    InsertEnd (&dllist, 50);
    InsertEnd (&dllist, 60);
    DeleteElem (&dllist, 2);
    // InsertAfter (&dllist, 4, 45);

    DLListDump (dump_file, &dllist);

    fclose(dump_file);
}

//-------------------------------------------------

// TODO функция поиска по логическому индексу физического
// TODO красивый дамп - сделано
// TODO InsertEnd на основе - сделано
// TODO prev нулевого указывает на последний - сделано
// TODO next последнего на ноль - сделано
// TODO InsertBegin на основе - сделано