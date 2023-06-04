//
// Created by shani on 03/06/2023.
//

#include <algorithm>  // for remove
#include "MagicalContainer.hpp"
using namespace std;

MagicalContainer magic (vector<int> vec);

void MagicalContainer::addElement(int num) {
    _vec.push_back(num);
}

void MagicalContainer::removeElement(int num) {
    // Remove all occurrences of 'num'
    _vec.erase(remove(_vec.begin(), _vec.end(), 3), _vec.end());
}

int MagicalContainer::size() {
    return _vec.size();
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator=(AscendingIterator &acsIt) {return *this;}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator=(vector<int>::iterator &it) {return *this;}

int MagicalContainer::AscendingIterator::operator*() {return -1;}

int MagicalContainer::AscendingIterator::operator++() {return -1;}

bool MagicalContainer::AscendingIterator::operator==(AscendingIterator acsIt) {return false;}

bool MagicalContainer::AscendingIterator::operator!=(AscendingIterator acsIt) {return false;}

bool MagicalContainer::AscendingIterator::operator>(AscendingIterator acsIt) {return false;}

bool MagicalContainer::AscendingIterator::operator<(AscendingIterator acsIt) {return false;}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() {return *this;}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() {return *this;}




MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::operator=(PrimeIterator &acsIt) {return *this;}

int MagicalContainer::PrimeIterator::operator*() {return -1;}

int MagicalContainer::PrimeIterator::operator++() {return -1;}

bool MagicalContainer::PrimeIterator::operator==(PrimeIterator acsIt) {return false;}

bool MagicalContainer::PrimeIterator::operator!=(PrimeIterator acsIt) {return false;}

bool MagicalContainer::PrimeIterator::operator>(PrimeIterator acsIt) {return false;}

bool MagicalContainer::PrimeIterator::operator<(PrimeIterator acsIt) {return false;}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() {return *this;}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() {return *this;}





MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::operator=(SideCrossIterator &acsIt) {return *this;}

int MagicalContainer::SideCrossIterator::operator*() {return -1;}

int MagicalContainer::SideCrossIterator::operator++() {return -1;}

bool MagicalContainer::SideCrossIterator::operator==(SideCrossIterator acsIt) {return false;}

bool MagicalContainer::SideCrossIterator::operator!=(SideCrossIterator acsIt) {return false;}

bool MagicalContainer::SideCrossIterator::operator>(SideCrossIterator acsIt) {return false;}

bool MagicalContainer::SideCrossIterator::operator<(SideCrossIterator acsIt) {return false;}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() {return *this;}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() {return *this;}