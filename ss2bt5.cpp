#include <stdio.h>
#include <string.h>

struct SinhVien {
    int stt;
    char hoTen[50];
    int tuoi;
    char soDienThoai[12];
    char email[50];
};

void inDanhSachSinhVien(struct SinhVien ds[], int n) {
    printf("+-----+--------------------+-------+--------------+------------------------+\n");
    printf("| STT |      Ho va ten     | Tuoi  | So dien thoai|        Email           |\n");
    printf("+-----+--------------------+-------+--------------+------------------------+\n");
    
    for (int i = 0; i < n; i++) {
        printf("| %3d | %-18s | %5d | %-12s | %-22s |\n",
               ds[i].stt, ds[i].hoTen, ds[i].tuoi, ds[i].soDienThoai, ds[i].email);
               printf("+-----+--------------------+-------+--------------+------------------------+\n");
    }
}
int main() {
    // M?ng các sinh viên
    struct SinhVien danhSach[] = {
        {1, "Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com"},
        {2, "Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com"},
        {3, "Nguyen Van C", 18, "0904488483", "cnv@rikkeiacademy.com"},
        {4, "Nguyen Van D", 19, "0904488484", "dnv@rikkeiacademy.com"},
        {5, "Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com"},
        {6, "Nguyen Van F", 21, "0904488486", "fnv@rikkeiacademy.com"},
        {7, "Nguyen Van G", 23, "0904488487", "gnv@rikkeiacademy.com"},
        {8, "Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com"},
        {9, "Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com"},
        {0, "Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com"},
    };
    
    int soLuongSinhVien = sizeof(danhSach) / sizeof(danhSach[0]);
    
    inDanhSachSinhVien(danhSach, soLuongSinhVien);
    
    return 0;
}
