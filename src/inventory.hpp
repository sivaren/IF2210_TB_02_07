//base class buat inventory
#ifndef _INVENTORY_H
#define _INVENTORY_H
#include <iostream>
#include "item.hpp"
#include "tool.hpp"
#include "nontool.hpp"
#define MAX_SIZE 64
using namespace std;

const int ROW = 3;
const int COLOM = 9;
const int size_inventory = ROW*COLOM;

class inventory {
    private:
        item** inv_buffer;
    public:
        inventory();
        ~inventory();
        item* get(int pos);
        void set(int pos, item* items);
        void specify(int pos);
        void displayMenu();
        void displayDetails();
        void addNonTool(nontool* item, int quantity);
        void addTool(tool* item, int start);
        void discard(int quantity, int slot);
        void moveToCraft(int slotSrc, int destSlot[], int N);
        void toAnotherSlot(int slotSrc, int destSlot[]);
};

#endif