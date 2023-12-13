#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>

template <typename V> 
class TableEntry {
    public:
        std::string key;
	V value;

	TableEntry(std::string key, V value){
		this->key = key;
		this->value = value;
	}

    	TableEntry(std::string key){
		this->key = key;
		value = NULL;
	}

	TableEntry(){
		key = "";
		value = NULL;
	}

	friend bool operator==(const TableEntry<V> &te1, const TableEntry<V> &te2){
		if (te1.key == te2.key) { return true;}
		else { return false;}
	}

	friend bool operator!=(const TableEntry<V> &te1, const TableEntry<V> &te2){
		if (te1.key == te2.key) {return false;}
		else { return true;}
	}

	friend std::ostream& operator<<(std::ostream &out, const TableEntry<V> &te){
		out << "Entrada: " << te.key << " --> " << te.value;
		return out;	
	}
};

#endif
