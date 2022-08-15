
#include "BagInterface.h"

template<class ItemType>
class ArrayBag : public BagInterface<ItemType>
{
    private:
    static const int DEFAULT_CAPACITY = 6;
    ItemType items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;
    int getIndexOf(const ItemType& target) const;
    public:
    ArrayBag();
    int getCurrentSize() const{return itemCount;};
    bool isEmpty() const {return itemCount == 0;}
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry){return false;}//stub
    void clear(){itemCount = 0;}
    bool contains(const ItemType& anEntry) const;
    int getFrequencyOf(const ItemType& anEntry) const;
    vector<ItemType> toVector() const;
};
    /*
    always intialize the data members in order you defined them
    using initializer only for constructor methods
    template<class ItemType>
    ArrayBag<ItemType>::ArrayBag():itemCount(0), maxItems(DEFAULT_CAPACITY) {}// default constructor end
    */
    template<class ItemType> 
    ArrayBag<ItemType>::ArrayBag(){
        itemCount = 0;
        maxItems = DEFAULT_CAPACITY;  
    }// default constructor ends

    template<class ItemType> 
    bool ArrayBag<ItemType>::add(const ItemType& newEntry){
        bool hasRoomToAdd = (itemCount < maxItems);
        if (hasRoomToAdd) {
            items[itemCount++] = newEntry;
        }
        return hasRoomToAdd;
    }// add method ends

    template<class ItemType>
  vector<ItemType> ArrayBag<ItemType>::toVector() const{
        vector <ItemType> bagContents;
        for (int i = 0; i <itemCount; i++){
            bagContents.push_back(items[i]);
        }
        return bagContents;
    }// toVector() ends
   template<class ItemType>
    bool ArrayBag<ItemType>:: contains(const ItemType& item) const { 
        for (int i = 0; i <itemCount; i++){
            if(items[i] == item) 
                return true;
        }
        return false;

    }// contains ends

    template<class ItemType>
    int ArrayBag<ItemType>:: getFrequencyOf(const ItemType& item) const {
        int frequency = 0 ; 
        for (int i = 0; i <itemCount; i++){
            frequency++;
        }
        return frequency;

    }// contains ends
 




