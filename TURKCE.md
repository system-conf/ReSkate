# ReSkate Türkçe Yama (resmi değil)

skate. için ReSkate'e Türkçe arayüz yazıları getiren, gayriresmî bir çeviri. Bu ilk sürüm
menüleri, butonları ve arayüz yazılarını kapsıyor; diyaloglar ve diğer metinler sonraki
sürümlerde gelecek.

Çeviri, ReSkate'in `reskate-strings.json` özelliğiyle yükleniyor: oyunun kendi metinlerinin yerine
geçen bir dosya (bkz. [contrib/text-overrides.md](contrib/text-overrides.md)). Bu özellik henüz
resmî ReSkate sürümünde olmadığı için yamayla birlikte değiştirilmiş bir `ReSkate.dll` geliyor.

## Gereksinimler

- ReSkate **2.1.1**
- skate. oyun sürümü (build) **25414733**
- Oyun dili **İngilizce** (çeviri İngilizce metinlerin üzerine yazılıyor)

## Kurulum

1. Oyunu ve ReSkate başlatıcısını kapatın.
2. ReSkate klasöründeki (`Skate.exe` ile aynı yerdeki) `ReSkate.dll` dosyasının bir yedeğini alın,
   örneğin adını `ReSkate.dll.yedek` yapın.
3. Sürümdeki (release) `ReSkate.dll` dosyasını aynı klasöre kopyalayın.
4. `reskate-strings.json` dosyasını `%LOCALAPPDATA%\ReSkate\` klasörüne koyun (Windows Gezgini'nin
   adres çubuğuna `%LOCALAPPDATA%\ReSkate` yazıp Enter'a basarak açabilirsiniz).
5. ReSkate başlatıcısında **Settings** (Ayarlar) bölümünden **ReSkate güncellemelerini kapatın**.
   Kapatmazsanız başlatıcı resmî `ReSkate.dll` dosyasını geri yükler ve Türkçe kaybolur.
6. İsteğe bağlı: aynı yerden çökme raporlarını (crash reports) da kapatabilirsiniz; bu DLL resmî
   olmadığı için ReSkate geliştiricilerine rapor göndermesi onların işine yaramaz.
7. Oyunu başlatın. Yazılar Türkçe görünmelidir.

## Geri alma

1. Oyunu kapatın.
2. Yedeklediğiniz `ReSkate.dll` dosyasını geri koyun (veya başlatıcıda ReSkate güncellemelerini
   tekrar açın; başlatıcı resmî DLL'i indirir).
3. `%LOCALAPPDATA%\ReSkate\reskate-strings.json` dosyasını silin.

## Uyarı

Bu yama gayriresmîdir. EA, Full Circle veya ReSkate geliştiricileriyle hiçbir bağlantısı yoktur
ve onlar tarafından desteklenmez. Yamayla ilgili sorunları resmî ReSkate kanallarına değil, bu
deponun Issues bölümüne bildirin. Kullanım riski size aittir.

## Kaynak kodu

ReSkate GPLv3 lisanslıdır. Sürümdeki `ReSkate.dll`, bu deponun `turkce` dalından derlenmiştir;
kaynak kodunun tamamı burada. Çeviri dosyası `contrib/translation-tr/reskate-strings.json`.
