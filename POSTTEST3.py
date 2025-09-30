# Program Pembayaran UKT
# NIM GENAP

# Data login
nama_terdaftar = "Agung"
nim_terdaftar = "20241022"      # contoh NIM, sesuaikan dengan data Anda

# Harga UKT
UKT = 6000000

# Validasi login
print("=== LOGIN SISTEM PEMBAYARAN UKT ===")
nama = input("Masukkan Nama: ")
nim = input("Masukkan NIM: ")

if nama == nama_terdaftar and nim == nim_terdaftar:
    print("\nLogin berhasil! Selamat datang,", nama)
    
    # Menu opsi pembayaran
    print("\n=== MENU PEMBAYARAN UKT ===")
    print("1. Lunas (Sekali Bayar) - Biaya Admin 1%")
    print("2. Cicilan 2x per Semester - Biaya Admin 5%")
    print("3. Cicilan 4x per Semester - Biaya Admin 8%")
    print("4. Cicilan 6x per Semester - Biaya Admin 12%")

    pilihan = int(input("Pilih metode pembayaran (1-4): "))

    # Proses perhitungan
    if pilihan == 1:
        admin = 0.01
        total_bayar = UKT + (UKT * admin)
        print(f"\nMetode: Lunas")
        print(f"Total Bayar: Rp {total_bayar:,.0f}")

    elif pilihan == 2:
        admin = 0.05
        total_bayar = UKT + (UKT * admin)
        cicilan = total_bayar / 2
        print(f"\nMetode: Cicilan 2x")
        print(f"Total Bayar: Rp {total_bayar:,.0f}")
        print(f"Besaran Cicilan per Periode: Rp {cicilan:,.0f}")

    elif pilihan == 3:
        admin = 0.08
        total_bayar = UKT + (UKT * admin)
        cicilan = total_bayar / 4
        print(f"\nMetode: Cicilan 4x")
        print(f"Total Bayar: Rp {total_bayar:,.0f}")
        print(f"Besaran Cicilan per Periode: Rp {cicilan:,.0f}")

    elif pilihan == 4:
        admin = 0.12
        total_bayar = UKT + (UKT * admin)
        cicilan = total_bayar / 6
        print(f"\nMetode: Cicilan 6x")
        print(f"Total Bayar: Rp {total_bayar:,.0f}")
        print(f"Besaran Cicilan per Periode: Rp {cicilan:,.0f}")

    else:
        print("Pilihan tidak valid!")

else:
    print("\nLogin gagal! Nama atau NIM tidak sesuai.")
    print("Akses pembayaran ditolak.")
