#include "MemoryLoader.hpp"

int main() {
    RvMemory mem(10);
    load_memory(&mem, "D:\\SJTU\\2023Spring\\����ۺ�ʵ��PPCA\\risc-v-simulator\\sample\\sample.data");
    uint32 a;
    mem.read(1024, a);
}