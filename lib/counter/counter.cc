#include "counter.h"

Counter::Counter(int count):m_count(count)
{
}

void Counter::increment(int no)
{
        m_count += no;
}

int Counter::getCount() { return m_count; }
