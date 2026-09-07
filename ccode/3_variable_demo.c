#include <stdio.h>

int main() {
    int j_score;
    int m_score;
    m_score = 89;
    j_score = 98;
    m_score = j_score;
    j_score = 89;
    printf("j_score: %d\n", j_score);
    printf("m_score: %d\n", m_score);
    return 0;
}