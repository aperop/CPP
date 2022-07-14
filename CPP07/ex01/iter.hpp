//
// Created by Denim Hawkgirl on 7/2/22.
//

#ifndef CPP07_ITER_HPP
#define CPP07_ITER_HPP

template <typename T>
void iter(T *array, int length, void (*func)(T&)){
    for (int i = 0; i < length; ++i){
        func(array[i]);
    }
}

#endif //CPP07_ITER_HPP
