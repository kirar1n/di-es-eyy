# **Doubly LL - Music**

*by Jay Vince Serato*

You are to implement a music streaming application that will have the following details:

---

### **Song Struct**
A **`Song`** struct has:
* `string title`
* At most 2 artists
* `bool fave`
* `int counter` (number of times played)

> **Rule:** When a song has been played **more than 5 times**, this song should automatically be set as a favorite (`fave = true`).

---

### **Playlist Implementation**
The playlist is implemented using a **Doubly Linked List with Sentinels** (header and trailer) and a **current song marker** to indicate which song is currently playing. 
* Initially, there are no songs.
* The user has to play the next song in order to play the first song.

---

### **Playlist Methods**

* **`void addSong(Song* s)`**  
  Adds the song to the end of the playlist. If this song is initially a favorite, add this to the first part of the list at the end of the existing favorites.

* **`Song* next()`**  
  Plays the next song in the list. Returns `null` if there are no next songs.

* **`Song* previous()`**  
  Plays the previous song in the list. Returns `null` if there are no previous songs.

* **`Song* play()`**  
  Plays the current song. Returns `null` if there is no current song.

* **`Song* skip()`**  
  Reduces the play counter of the current song and plays the next song. Returns `null` if there are no next songs.

* **`Song* skip(int n)`**  
  Reduces the play counter of the current song and skips `n` songs to play the next song. Returns the last song in the list if `n` exceeds available remaining songs, and `null` if there are no next songs.

* **`Song* find(string artist)`**  
  Finds the next song played by the specified artist and plays it. If there are no remaining songs with the artist, return `null` and maintain the current song as is.

* **`bool toggleFavorite()`**  
  Makes the current song a favorite if it is currently not set as favorite and returns `true`; otherwise, unfavorites the song and returns `false`.

* **`Song* remove()`**  
  Removes the current song from the list and returns the song if it exists; otherwise returns `null`. The next song shall be marked as the current song, and when there is no next song, the previous song will be the current song.

---

### **Sample Output 1**
```text
Op: a
Title: SnowOnTheBeach
Artist: Swift DelRey
Favorite (1/0)? 0
Op: a
Title: LoveMeHarder
Artist: Grande Weekend
Favorite (1/0)? 0
Op: a
Title: CruelSummer
Artist: Swift na
Favorite (1/0)? 1
Op: a
Title: WeDontTalkAnymore
Artist: Puth Gomez
Favorite (1/0)? 0
Op: a
Title: Maroon
Artist: Swift na
Favorite (1/0)? 1
Op: a
Title: CastlesCrumbling
Artist: Swift Williams
Favorite (1/0)? 1
Op: a
Title: Run
Artist: Swift Sheeran
Favorite (1/0)? 0
Op: a
Title: Photograph
Artist: Sheeran na
Favorite (1/0)? 1
Op: a
Title: LegoHouse
Artist: Sheeran na
Favorite (1/0)? 0
Op: a
Title: TheJokerAndTheQueen
Artist: Sheeran Swift
Favorite (1/0)? 1
Op: p
Song Count: 10
1. CruelSummer by Swift #0 *
2. Maroon by Swift #0 *
3. CastlesCrumbling by Swift, Williams #0 *
4. Photograph by Sheeran #0 *
5. TheJokerAndTheQueen by Sheeran, Swift #0 *
6. SnowOnTheBeach by Swift, DelRey #0
7. LoveMeHarder by Grande, Weekend #0
8. WeDontTalkAnymore by Puth, Gomez #0
9. Run by Swift, Sheeran #0
```
### **Sample Output 2**
```text
Op: a
Title: SnowOnTheBeach
Artist: Swift DelRey
Favorite (1/0)? 0
Op: a
Title: LoveMeHarder
Artist: Grande Weekend
Favorite (1/0)? 0
Op: a
Title: CruelSummer
Artist: Swift na
Favorite (1/0)? 1
Op: a
Title: WeDontTalkAnymore
Artist: Puth Gomez
Favorite (1/0)? 0
Op: a
Title: Maroon
Artist: Swift na
Favorite (1/0)? 1
Op: a
Title: CastlesCrumbling
Artist: Swift Williams
Favorite (1/0)? 1
Op: a
Title: Run
Artist: Swift Sheeran
Favorite (1/0)? 0
Op: a
Title: Photograph
Artist: Sheeran na
Favorite (1/0)? 1
Op: a
Title: LegoHouse
Artist: Sheeran na
Favorite (1/0)? 0
Op: a
Title: TheJokerAndTheQueen
Artist: Sheeran Swift
Favorite (1/0)? 1
Op: p
Song Count: 10
1. CruelSummer by Swift #0 *
2. Maroon by Swift #0 *
3. CastlesCrumbling by Swift, Williams #0 *
4. Photograph by Sheeran #0 *
5. TheJokerAndTheQueen by Sheeran, Swift #0 *
6. SnowOnTheBeach by Swift, DelRey #0
7. LoveMeHarder by Grande, Weekend #0
8. WeDontTalkAnymore by Puth, Gomez #0
9. Run by Swift, Sheeran #0
10. LegoHouse by Sheeran #0
Op: n
Now playing CruelSummer
Op: n
Now playing Maroon
Op: n
Now playing CastlesCrumbling
Op: n
Now playing Photograph
Op: n
Now playing TheJokerAndTheQueen
Op: n
Now playing SnowOnTheBeach
Op: n
Now playing LoveMeHarder
Op: n
Now playing WeDontTalkAnymore
Op: n
Now playing Run
Op: p
Song Count: 10
1. CruelSummer by Swift #1 *
2. Maroon by Swift #1 *
3. CastlesCrumbling by Swift, Williams #1 *
4. Photograph by Sheeran #1 *
5. TheJokerAndTheQueen by Sheeran, Swift #1 *
6. SnowOnTheBeach by Swift, DelRey #1
7. LoveMeHarder by Grande, Weekend #1
8. WeDontTalkAnymore by Puth, Gomez #1
9. Run by Swift, Sheeran #1
10. LegoHouse by Sheeran #0
Op: x
Closing
```

### **Sample Output 3**
```text
Op: a
Title: SnowOnTheBeach
Artist: Swift DelRey
Favorite (1/0)? 0
Op: a
Title: LoveMeHarder
Artist: Grande Weekend
Favorite (1/0)? 0
Op: a
Title: CruelSummer
Artist: Swift na
Favorite (1/0)? 1
Op: a
Title: WeDontTalkAnymore
Artist: Puth Gomez
Favorite (1/0)? 0
Op: a
Title: Maroon
Artist: Swift na
Favorite (1/0)? 1
Op: a
Title: CastlesCrumbling
Artist: Swift Williams
Favorite (1/0)? 1
Op: a
Title: Run
Artist: Swift Sheeran
Favorite (1/0)? 0
Op: a
Title: Photograph
Artist: Sheeran na
Favorite (1/0)? 1
Op: a
Title: LegoHouse
Artist: Sheeran na
Favorite (1/0)? 0
Op: a
Title: TheJokerAndTheQueen
Artist: Sheeran Swift
Favorite (1/0)? 1
Op: p
Song Count: 10
1. CruelSummer by Swift #0 *
2. Maroon by Swift #0 *
3. CastlesCrumbling by Swift, Williams #0 *
4. Photograph by Sheeran #0 *
5. TheJokerAndTheQueen by Sheeran, Swift #0 *
6. SnowOnTheBeach by Swift, DelRey #0
7. LoveMeHarder by Grande, Weekend #0
8. WeDontTalkAnymore by Puth, Gomez #0
9. Run by Swift, Sheeran #0
10. LegoHouse by Sheeran #0
Op: n
Now playing CruelSummer
Op: n
Now playing Maroon
Op: n
Now playing CastlesCrumbling
Op: n
Now playing Photograph
Op: n
Now playing TheJokerAndTheQueen
Op: n
Now playing SnowOnTheBeach
Op: n
Now playing LoveMeHarder
Op: n
Now playing WeDontTalkAnymore
Op: +
Playing WeDontTalkAnymore
Op: +
Playing WeDontTalkAnymore
Op: +
Playing WeDontTalkAnymore
Op: +
Playing WeDontTalkAnymore
Op: +
Playing WeDontTalkAnymore
Op: n
Now playing Run
Op: p
Song Count: 10
1. CruelSummer by Swift #1 *
2. Maroon by Swift #1 *
3. CastlesCrumbling by Swift, Williams #1 *
4. Photograph by Sheeran #1 *
5. TheJokerAndTheQueen by Sheeran, Swift #1 *
6. SnowOnTheBeach by Swift, DelRey #1
7. LoveMeHarder by Grande, Weekend #1
8. WeDontTalkAnymore by Puth, Gomez #6 *
9. Run by Swift, Sheeran #1
10. LegoHouse by Sheeran #0
Op: x
Closing
```

