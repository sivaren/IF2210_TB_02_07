#include "../src/crafting.hpp"
#include "../src/item.hpp"
int main(){
    item item1(1, "OAK_LOG", "LOG", 4);
    item item2(1, "OAK_LOG", "LOG", 4);
    crafting *crafting1 = new crafting();
    if((*crafting1).isTableEmpty()){
        (*crafting1).show();
    }
    (*crafting1).move(item1, 1);
    (*crafting1).move(item1, 2);
    if((*crafting1).isTableEmpty()){
        (*crafting1).show();
    }
    item def = (*crafting1).move(1);
    (*crafting1).show();
}