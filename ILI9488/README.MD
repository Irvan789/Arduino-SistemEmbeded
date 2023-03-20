# Tentang
Menampilkan Text pada SPI TFT Module ILI9488.

# Required Library
- [TFT eSPI by Bodmer](https://github.com/Bodmer/TFT_eSPI)

# Konfigurasi PIN 
| TFT SPI    | ESP32  |
|------------|--------|
| VCC        | VCC 5V |
| GND        | GND    |
| CS         | 15     |
| RESET      | 4      |
| DC/RS      | 2      |
| SDI (MOSI) | 23     |
| SCK        | 18     |
| LED        | VCC 5V |
| SDO (MISO) | 19     |

# Konfigurasi TFT eSPI
- Install terlebih dahulu library **TFT eSPI**.
- Buka **File Explorer** > **This PC** > **Documents** > **Arduino** > **libraries** > **TFT_eSPI by Bodmer**.
- Edit file **User_Setup.h**.
- Beri garis dua `//` di awal pada line 45.
- Hapus garis dua `//` di awal pada line 54.
- Beri garis dua `//` di awal pada line 169 sampai 171.
- Hapus garis dua `//` di awal pada line 206 sampai 211.
- Simpan file tersebut.

[< Kembali](https://github.com/Irvan789/Sistem-Embeded)
