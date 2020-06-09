/*
    Hash set: Set data structure, stores no repeated values.
    Hash map: Map data structure, stores key and value pairs.
    
    - General idea of hash table is mapping keys to buckets.
    - Mapping is done through the usage of hash functions.
        - Hash functions depend on the range of key values
        and the number of buckets.
    - Whenever hashes are used, collisions are almost inevitable.
        - That is multiple values being assigned to the same bucket.
        - If N (number of keys) is small that an array could be used
        to stored the keys in the same bucket. If N is variable or 
        larger, then moving to a height balanced tree would be better.
            - Height balanced trees means that less levels of the tree
            would need to be traversed to find the value. Time
            complexity goes up as more levels of the tree are
            traversed.
*/

class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        
    }
    
    void remove(int key) {
        
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */