
#include<vector>
using std::vector;
/**
 * @brief generic implementation of baginterface
 * An abstract main class, can not be instantiated only use it for the base class
 * subclass of this interface will implement the method specified but not defined in the abstract class 
 * @tparam ItemType 
 */
template<class ItemType>// for giving meaning to ItemType identifier
class BagInterface 
{
    public:
    /**
     * @brief Get the Current Size object
     * @return int the Current Size of entries int the bag
    */
    virtual int getCurrentSize() const = 0;
    /**
     * @brief sees if the bag is empty
     * 
     * @return true  if bag is  empty
     * @return false if bag is not empty 
     */
    virtual bool isEmpty() const = 0;
    /**
     * @brief add a new entry to the bag
     * 
     * @param newEntry item you want to add to bag
     * @return true if entry is added successfully
     * @return false if entry is not added successfully
     */
    virtual bool add (const ItemType& newEntry) = 0;
    /**
     * @brief remove a recurrence of an entry from the Bag
     * 
     * @param anEntry THE entry to remove
     * @return true  if the entry was removed successfully
     * @return false if the entry was not removed successfully
     */
    virtual bool remove (const ItemType& anEntry) = 0;
    /**
     * @brief remove all items from the bag
     * 
     */
    virtual void clear() = 0;
    /**
     * @brief counts the number of times that anEntry appears in the Bag
     * 
     * @param anEntry the entry to be counted 
     * @return int number of times that anEntry appears in the Bag
     */
    virtual int getFrequencyOf(const ItemType& anEntry) const = 0;
    /**
     * @brief test whether anEntry appears in the Bag
     * 
     * @param anEntry the entery we want to check if it appears in the Bag
     * @return true if entery exists in the Bag
     * @return false if entery does not exist in the Bag
     */
    virtual bool contains(const ItemType& anEntry) const = 0;
    virtual vector<ItemType> toVector() const = 0;

};
/*Notes
  # benifit of writing a interface before writhing a class 
    1- document specification in  a concise way
    2- use code in interface as an outline for the actual class
    3-provides data type for an ADT that is independent of the particular class definition 
    
*/