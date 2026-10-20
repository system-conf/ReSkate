# ReSkate Türkçe

skate. için ReSkate başlatıcısını ve oyun arayüzünü Türkçeye çeviren bir yama.

> **Gayriresmî bir hayran çevirisidir.** EA, Full Circle veya ReSkate geliştiricileriyle hiçbir
> bağlantısı yoktur ve onlar tarafından desteklenmez. ReSkate'in kendisi
> [ReSkate katkıcılarının](https://github.com/Dingo-Shenanigans/ReSkate) eseridir; bu depo onun bir
> çatalıdır (fork). Yamayla ilgili sorunları resmî ReSkate kanallarına değil, bu deponun
> [Issues](https://github.com/system-conf/ReSkate/issues) bölümüne bildirin.
>
> Orijinal İngilizce README: [README.en.md](README.en.md)

## İndir

**[En son sürümü indir](https://github.com/system-conf/ReSkate/releases/latest)**

Şu anki sürüm: **v2.1.1-tr.1** (ön sürüm). Kurulum aşağıda.

## Neler Türkçe?

Bu sürümde (v2.1.1-tr.1):

- **Başlatıcı:** tamamen Türkçe (739 metin).
- **Oyun arayüzü:** menüler, butonlar ve arayüz yazıları, ilk tur (yaklaşık 9.200 metin).

Sırada:

- Diyaloglar ve uzun metinler.
- Oyun içi ReSkate menüsü (Insert tuşu).

## ReSkate nedir?

ReSkate, skate. oyununu EA sunucuları olmadan oynamanı sağlayan, topluluk yapımı bir başlatıcı ve
eklentidir:

- **Çevrimdışı oyun:** kaykaycın, kıyafetlerin ve ilerlemen bilgisayarında saklanır.
- **Çok oyunculu:** 32 kişiye kadar Steam lobileri, adanmış sunucular, yakınlık sesli sohbeti.
- **Park Editörü:** nesneleri yerleştir, taşı, kaydet; her haritada tekrar kullan.
- **Modlar:** `Mods/` klasörüne at ya da başlatıcıdan [Thunderstore](https://thunderstore.io/c/reskate/)
  modlarını kur.

Ayrıntılar için [README.en.md](README.en.md).

## Gereksinimler

- Steam'de **skate.** (ücretsiz: Steam kütüphanene eklemen yeterli). Epic veya EA app kopyaları
  ReSkate ile çalışmaz.
- ReSkate **2.1.1** (yamanın içinde geliyor).
- skate. oyun sürümü (build) **25414733** (başlatıcı bunu kendisi indirir).
- Yaklaşık **14 GB** boş alan.
- Oyun dili **İngilizce** (çeviri İngilizce metinlerin üzerine yazılır).

## Kurulum

ReSkate'i hiç kullanmadıysan:

1. Kendine ait **yeni, boş bir klasör** oluştur, örneğin `D:\Oyunlar\ReSkate`. Steam'in skate.
   klasörünü **kullanma**: ReSkate oyunun kendi kopyasını bu klasöre kurar, böylece Steam
   güncellemeleri onu bozamaz.
2. İndirdiğin zip'i bu klasöre çıkar.
3. `ReSkateLauncher.exe` dosyasını çalıştır.
   - İstendiğinde skate.'e sahip Steam hesabınla oturum aç (**STEAM'DE OTURUM AÇ**). QR kodu Steam
     uygulamasıyla okutabilir ya da kullanıcı adı, şifre ve Steam Guard kullanabilirsin.
   - Başlatıcı desteklenen oyun sürümünü indirir ve dosyaları denetler.
   - İpucu: Steam'in skate. klasörünün içeriğini önce bu klasöre kopyalarsan, değişmemiş dosyalar
     tekrar indirilmez.
4. `reskate-strings.json` dosyasını `%LOCALAPPDATA%\ReSkate\` klasörüne koy. Açmak için
   **Win+R**'ye bas, `%LOCALAPPDATA%\ReSkate` yaz ve Enter'a bas.
5. Başlatıcıda **AYARLAR → GELİŞMİŞ** (Settings → ADVANCED) sayfasını aç ve
   **ReSkate güncellemelerini kur** (Install ReSkate updates) seçeneğinin işaretini kaldır.
   Kaldırmazsan başlatıcı resmî ReSkate dosyalarını geri yükler ve Türkçe kaybolur.
6. Dil: Windows Türkçeyse başlatıcı kendiliğinden Türkçe açılır. Değilse
   **AYARLAR → GELİŞMİŞ → Dil → Türkçe** (Settings → ADVANCED → Language).
7. İsteğe bağlı: aynı sayfadaki **Çökme raporları gönder** (Send crash reports) seçeneğini
   kapatabilirsin. Bu dosyalar resmî olmadığı için raporlar ReSkate geliştiricilerinin işine yaramaz.
8. **OYNA**'ya bas.

## Zaten ReSkate kullanıyorsan

1. Oyunu ve başlatıcıyı kapat.
2. ReSkate klasöründeki `ReSkateLauncher.exe` ve `ReSkate.dll` dosyalarını yedekle (örneğin
   adlarının sonuna `.yedek` ekle).
3. Zip'teki `ReSkateLauncher.exe` ve `ReSkate.dll` dosyalarını aynı klasöre kopyala.
4. Yukarıdaki kurulumun 4.-8. adımlarını uygula (json dosyası ve ayarlar).

## Geri alma

1. Oyunu ve başlatıcıyı kapat.
2. Yedeklediğin `ReSkateLauncher.exe` ve `ReSkate.dll` dosyalarını geri koy (ya da başlatıcıda
   **ReSkate güncellemelerini kur** seçeneğini tekrar aç; başlatıcı resmî dosyaları indirir).
3. `%LOCALAPPDATA%\ReSkate\reskate-strings.json` dosyasını sil.

## Sık sorulanlar / Sorun giderme

- **Spotify entegrasyonu çalışmıyor.** Bu yamadaki `ReSkate.dll`'de Spotify entegrasyonu yok.
- **Bazı yazılar taşıyor ya da kesiliyor.** Türkçe metinler bazen İngilizceden uzun. Ekran
  görüntüsüyle bildir (aşağıya bak).
- **Bazı yazılar hâlâ İngilizce.** Henüz çevrilmedi; çeviri ilk turda. Diyaloglar ve uzun metinler
  sırada.
- **Oyunda hiçbir şey Türkçe değil.** Oyun dilinin İngilizce olduğundan ve `reskate-strings.json`
  dosyasının `%LOCALAPPDATA%\ReSkate\` içinde olduğundan emin ol. **ReSkate güncellemelerini kur**
  açıksa başlatıcı resmî dosyaları geri yüklemiş olabilir; kapatıp yamanın dosyalarını tekrar kopyala.
- **Steam oyunu güncelledi.** ReSkate kendi oyun kopyasını kullanır ve tek bir oyun sürümünü
  destekler. Yeni sürüm için ReSkate desteğini ve bu yamanın güncellemesini beklemen gerekir.
- **Antivirüs uyarı veriyor.** `ReSkate.dll` ve `ReSkateLauncher.exe` imzalı değil, bu yüzden bazı
  antivirüsler uyarabilir. Dosyalar bu deponun kaynak kodundan derlenir, SHA-256 özetleri sürüm
  notlarında yazar ve derleme GitHub Actions üzerinde herkese açık şekilde yapılır.

## Katkı / hata bildirimi

Hataları ve önerileri bu deponun [Issues](https://github.com/system-conf/ReSkate/issues) bölümüne
yaz. Çeviri düzeltmesi önermek için bir Issue aç ve şunları ekle:

- ekran görüntüsü,
- İngilizce metin,
- önerdiğin Türkçe metin.

Oyun çevirisi: [`contrib/translation-tr/reskate-strings.json`](contrib/translation-tr/reskate-strings.json)
Başlatıcı çevirisi: [`Launcher/languages/tr.json`](Launcher/languages/tr.json)

## Upstream PR'lar

Bu yamanın ihtiyaç duyduğu özellikler resmî ReSkate'e önerildi:

- [Dingo-Shenanigans/ReSkate#312](https://github.com/Dingo-Shenanigans/ReSkate/pull/312)
- [Dingo-Shenanigans/ReSkate#313](https://github.com/Dingo-Shenanigans/ReSkate/pull/313)

Kabul edilirlerse değiştirilmiş DLL ve EXE gerekmez; çeviri normal bir Thunderstore modu olarak
kurulabilir.

## Lisans

ReSkate GPLv3 lisanslıdır (bkz. [LICENSE](LICENSE)). Sürümdeki `ReSkate.dll` ve
`ReSkateLauncher.exe`, bu deponun `turkce` dalından derlenmiştir; kaynak kodunun tamamı burada.
