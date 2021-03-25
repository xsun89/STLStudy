//
// Created by Xin Sun on 2021-03-25.
//

#ifndef STLSTUDY_LIST_H
#define STLSTUDY_LIST_H
#define _POINTER_X(T, A)  T *

template<class _Ty>
class list {
public:
    struct _Node;
    typedef _POINTER_X(_Node, _A) _NodePtr;
    struct _Node {
        _NodePtr *Next, _Prev;
        _Ty _Value;
    };
    typedef size_t size_type;
    typedef _Ty    value_type;
    typedef _Ty*   pointer_type;
    typedef _Ty&   reference_type;
    typedef const _Ty* const_pointer_type;
    typedef const _Ty& const_reference_type;
private:
    _NodePtr _head;
    size_type _Size;
};

#endif //STLSTUDY_LIST_H

