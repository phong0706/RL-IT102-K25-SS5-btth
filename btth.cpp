#include <stdio.h>

int main() {
    int phi_kham[10] = {150000, 300000, 200000, 500000};
    int so_luong = 4;

    int vi_tri_sua = 1;
    int gia_tri_moi = 350000;
    int phi_kham_moi = 250000;
    int vi_tri_xoa = 0;

    int tong_hai_ca_dau = phi_kham[0] + phi_kham[1];
    printf("Tong chi phi 2 ca dau: %d VNÐ\n", tong_hai_ca_dau);

    phi_kham[vi_tri_sua] = gia_tri_moi;
    printf("Sau khi sua vi tri %d: Chi phi moi = %d VNÐ\n", vi_tri_sua, phi_kham[vi_tri_sua]);

    phi_kham[so_luong] = phi_kham_moi;
    so_luong++;
    printf("Sau khi them ca moi: So luong = %d, Chi phi ca cuoi = %d VNÐ\n", so_luong, phi_kham[so_luong - 1]);

    if (vi_tri_xoa >= 0 && vi_tri_xoa < so_luong) {
        for (int i = vi_tri_xoa; i < so_luong - 1; i++) {
            phi_kham[i] = phi_kham[i + 1];
        }
        so_luong--;
        printf("Sau khi xoa vi tri %d: So luong = %d, Chi phi vi tri 0 moi = %d VNÐ\n", vi_tri_xoa, so_luong, phi_kham[0]);
    } else {
        printf("Loi: Vi tri xoa %d khong hop le! So luong ca kham giu nguyen: %d\n", vi_tri_xoa, so_luong);
    }

    return 0;
}
