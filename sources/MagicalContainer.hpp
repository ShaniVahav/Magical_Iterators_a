//
// Created by shani on 03/06/2023.
//

#ifndef MAGICAL_ITERATORS_A_MAGICALCONTAINER_HPP
#define MAGICAL_ITERATORS_A_MAGICALCONTAINER_HPP
#include <vector>
using namespace std;
namespace ariel{};

class MagicalContainer {
public:
    MagicalContainer() = default; // Default constructor

    MagicalContainer(vector<int> vec) : _vec(vec) {};

    void addElement(int num);  // add element to the container

    void removeElement (int num);  // remove all occurrences of 'num'

    int size();


private:
    vector<int> _vec;

public:
    class AscendingIterator {
    public:
        AscendingIterator(MagicalContainer& con) : _con(con){};

        ~AscendingIterator(){};

        AscendingIterator operator= (AscendingIterator& acsIt);

        AscendingIterator operator= (vector<int>::iterator& it);

        bool operator== (AscendingIterator acsIt);

        bool operator!= (AscendingIterator acsIt);

        bool operator> (AscendingIterator acsIt);

        bool operator< (AscendingIterator acsIt);

        int operator* ();

        int operator++ ();

        AscendingIterator begin();

        AscendingIterator end();

    private:
        MagicalContainer& _con;
        int* _acsIt;
    };

public:
    class PrimeIterator {
    public:
        PrimeIterator(MagicalContainer& con) : _con(con) {};


        ~PrimeIterator(){};

        PrimeIterator operator= (PrimeIterator& primeIt);

        bool operator== (PrimeIterator primeIt);

        bool operator!= (PrimeIterator primeIt);

        bool operator> (PrimeIterator primeIt);

        bool operator< (PrimeIterator primeIt);

        int operator* ();

        int operator++ ();

        PrimeIterator begin();

        PrimeIterator end();

    private:
        MagicalContainer& _con;
    };

public:
    class SideCrossIterator {
    public:
        SideCrossIterator(MagicalContainer& con) : _con(con) {};

        ~SideCrossIterator(){};

        SideCrossIterator operator= (SideCrossIterator& sideIt);

        bool operator== (SideCrossIterator sideIt);

        bool operator!= (SideCrossIterator sideIt);

        bool operator> (SideCrossIterator sideIt);

        bool operator< (SideCrossIterator sideIt);

        int operator* ();

        int operator++ ();

        SideCrossIterator begin();

        SideCrossIterator end();

    private:
        MagicalContainer& _con;
    };

};


#endif //MAGICAL_ITERATORS_A_MAGICALCONTAINER_HPP
