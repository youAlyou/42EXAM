#include <unistd.h>

int main() {
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++) {
        if ((letter - 'a') % 2 == 0)  // تحقق إذا كان الحرف في الموضع الزوجي
            write(1, &letter, 1);     // طباعة الحرف كما هو (صغير)
        else {
            char upper = letter - 32;  // تحويل الحرف إلى حرف كبير
            write(1, &upper, 1);       // طباعة الحرف الكبير
        }
    }

    write(1, "\n", 1);  // طباعة سطر جديد في النهاية
    return 0;
}
