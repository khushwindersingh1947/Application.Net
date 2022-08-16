#include "Khush.h"

Khush::Khush() {

}
Khush::Khush(int a) {
	num = a;
}
Khush Khush::operator+(Khush ks) {
	Khush newKs;
	newKs.num = num + ks.num;
	return newKs;
}
