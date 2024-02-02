#pragma once

class Something {
public:
    explicit Something() {}
    explicit Something(int a)
        : m_a(a)
    {
    }
    ~Something() {}

protected:
    int m_a{ 0 };
};

struct nested {
    struct intermediate {
        struct inner {
            int value;
        } inner;
    } intermediate;
};
