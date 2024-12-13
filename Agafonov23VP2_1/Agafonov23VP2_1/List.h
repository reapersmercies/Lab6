#pragma once
#include "Figure.h"
#include <stack>
#include <initializer_list>

using namespace System::Collections::Generic;

ref class FStack {
private:
    Stack<Figure^>^ stack_of_figures;

public:
    FStack() {
        stack_of_figures = gcnew Stack<Figure^>();
    }

    FStack(IEnumerable<Figure^>^ figures) {
        stack_of_figures = gcnew Stack<Figure^>(figures);
    }

    void push(Figure^ f) {
        stack_of_figures->Push(f);
    }

    void show(Graphics^ g) {
        for each (Figure ^ f in stack_of_figures) {
            f->draw(g);
        }
    }

    void clear() {
        stack_of_figures->Clear();
    }
};
