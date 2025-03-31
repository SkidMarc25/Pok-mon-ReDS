#include "../include/types.h"
#include "../include/constants/sndseq.h"
#include "../include/constants/species.h"
#include "../include/constants/trainerclass.h"

// Table seems to combine animation in column 1 with music in column 2, 0xFFFF for no special animation

u16 MainMusicComboTable[][2] =
{
    [ANIM_MUSIC_COMBO_FALKNER] = {0xC, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_BUGSY] = {0xD, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_WHITNEY] = {0xE, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_MORTY] = {0xF, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_JASMINE] = {0x10, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_CHUCK] = {0x11, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_PRYCE] = {0x12, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_CLAIR] = {0x13, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_BROCK] = {0x14, SEQ_GS_VS_GYMREADER_KANTO},
    [ANIM_MUSIC_COMBO_MISTY] = {0x15, SEQ_GS_VS_GYMREADER_KANTO},
    [ANIM_MUSIC_COMBO_LT_SURGE] = {0x16, SEQ_GS_VS_GYMREADER_KANTO},
    [ANIM_MUSIC_COMBO_ERIKA] = {0x17, SEQ_GS_VS_GYMREADER_KANTO},
    [ANIM_MUSIC_COMBO_JANINE] = {0x18, SEQ_GS_VS_GYMREADER_KANTO},
    [ANIM_MUSIC_COMBO_SABRINA] = {0x19, SEQ_GS_VS_GYMREADER_KANTO},
    [ANIM_MUSIC_COMBO_BLAINE] = {0x1A, SEQ_GS_VS_GYMREADER_KANTO},
    [ANIM_MUSIC_COMBO_BLUE] = {0x1B, SEQ_GS_VS_GYMREADER_KANTO},
    [ANIM_MUSIC_COMBO_WILL] = {0x1D, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_KOGA] = {0x1E, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_BRUNO] = {0x1F, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_KAREN] = {0x20, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_LANCE] = {0x21, SEQ_GS_VS_CHAMP},
    [ANIM_MUSIC_COMBO_RIVAL] = {0x1C, SEQ_GS_VS_RIVAL},
    [ANIM_MUSIC_COMBO_RAIKOU] = {0xFFFF, SEQ_GS_VS_RAIKOU},
    [ANIM_MUSIC_COMBO_ENTEI] = {0xFFFF, SEQ_GS_VS_ENTEI},
    [ANIM_MUSIC_COMBO_SUICUNE] = {0xFFFF, SEQ_GS_VS_SUICUNE},
    [ANIM_MUSIC_COMBO_HO_OH] = {0x23, SEQ_GS_VS_HOUOU},
    [ANIM_MUSIC_COMBO_LUGIA] = {0x24, SEQ_GS_VS_LUGIA},
    [ANIM_MUSIC_COMBO_WEATHER_TRIO] = {0x22, SEQ_GS_VS_KODAI},
    [ANIM_MUSIC_COMBO_MEWTWO_LATI_TWINS] = {0x22, SEQ_GS_VS_NORAPOKE_KANTO},
    [ANIM_MUSIC_COMBO_ROCKET_GRUNTS] = {0x27, SEQ_GS_VS_ROCKET},
    [ANIM_MUSIC_COMBO_PETREL] = {0x28, SEQ_GS_VS_ROCKET},
    [ANIM_MUSIC_COMBO_PROTON] = {0x29, SEQ_GS_VS_ROCKET},
    [ANIM_MUSIC_COMBO_ARCHER] = {0x2A, SEQ_GS_VS_ROCKET},
    [ANIM_MUSIC_COMBO_ARIANA] = {0x2B, SEQ_GS_VS_ROCKET},
    [ANIM_MUSIC_COMBO_GIOVANNI] = {0x2C, SEQ_GS_VS_ROCKET},
    [ANIM_MUSIC_COMBO_JOHTO_TRAINER_1] = {0x25, SEQ_GS_VS_TRAINER},
    [ANIM_MUSIC_COMBO_JOHTO_TRAINER_2] = {0x25, SEQ_GS_VS_TRAINER},
    [ANIM_MUSIC_COMBO_JOHTO_TRAINER_3] = {0x26, SEQ_GS_VS_TRAINER},
    [ANIM_MUSIC_COMBO_JOHTO_WILD_BATTLE_38] = {0x26, SEQ_GS_VS_NORAPOKE},
    [ANIM_MUSIC_COMBO_FRONTIER_BRAIN] = {0x25, SEQ_GS_BA_BRAIN},
    [ANIM_MUSIC_COMBO_GYM_LEADER_38] = {0x26, SEQ_GS_VS_GYMREADER},
    [ANIM_MUSIC_COMBO_JOHTO_TRAINER] = {0xFFFF, SEQ_GS_VS_TRAINER},
    [ANIM_MUSIC_COMBO_JOHTO_WILD_THEME] = {0xFFFF, SEQ_GS_VS_NORAPOKE},
    [ANIM_MUSIC_COMBO_KIMONO_GIRL] = {0x2D, SEQ_GS_VS_TRAINER},
    [ANIM_MUSIC_COMBO_RED] = {0x2E, SEQ_GS_VS_CHAMP},
    // (***END OF VANILLA ENTRIES***)
};

// format is one byte for trainer class, then one byte for combo (combo increments by 4 because each combo is four bytes long)

u8 TrainerClassToMusicCombo[][2] =
{
    {TRAINERCLASS_LEADER_FALKNER, ANIM_MUSIC_COMBO_FALKNER*4},
    {TRAINERCLASS_LEADER_BUGSY, ANIM_MUSIC_COMBO_BUGSY*4},
    {TRAINERCLASS_LEADER_WHITNEY, ANIM_MUSIC_COMBO_WHITNEY*4},
    {TRAINERCLASS_LEADER_MORTY, ANIM_MUSIC_COMBO_MORTY*4},
    {TRAINERCLASS_LEADER_JASMINE, ANIM_MUSIC_COMBO_JASMINE*4},
    {TRAINERCLASS_LEADER_CHUCK, ANIM_MUSIC_COMBO_CHUCK*4},
    {TRAINERCLASS_LEADER_PRYCE, ANIM_MUSIC_COMBO_PRYCE*4},
    {TRAINERCLASS_LEADER_CLAIR, ANIM_MUSIC_COMBO_CLAIR*4},
    {TRAINERCLASS_LEADER_BROCK, ANIM_MUSIC_COMBO_BROCK*4},
    {TRAINERCLASS_LEADER_MISTY, ANIM_MUSIC_COMBO_MISTY*4},
    {TRAINERCLASS_LEADER_LT_SURGE, ANIM_MUSIC_COMBO_LT_SURGE*4},
    {TRAINERCLASS_LEADER_ERIKA, ANIM_MUSIC_COMBO_ERIKA*4},
    {TRAINERCLASS_LEADER_JANINE, ANIM_MUSIC_COMBO_JANINE*4},
    {TRAINERCLASS_LEADER_SABRINA, ANIM_MUSIC_COMBO_SABRINA*4},
    {TRAINERCLASS_LEADER_BLAINE, ANIM_MUSIC_COMBO_BLAINE*4},
    {TRAINERCLASS_LEADER_BLUE, ANIM_MUSIC_COMBO_BLUE*4},
    {TRAINERCLASS_ELITE_FOUR_WILL, ANIM_MUSIC_COMBO_WILL*4},
    {TRAINERCLASS_ELITE_FOUR_KOGA, ANIM_MUSIC_COMBO_KOGA*4},
    {TRAINERCLASS_ELITE_FOUR_BRUNO, ANIM_MUSIC_COMBO_BRUNO*4},
    {TRAINERCLASS_ELITE_FOUR_KAREN, ANIM_MUSIC_COMBO_KAREN*4},
    {TRAINERCLASS_CHAMPION, ANIM_MUSIC_COMBO_LANCE*4},
    {TRAINERCLASS_RIVAL, ANIM_MUSIC_COMBO_RIVAL*4},
    {TRAINERCLASS_PASSERBY, ANIM_MUSIC_COMBO_RIVAL*4},
    {TRAINERCLASS_EXECUTIVE_ARCHER, ANIM_MUSIC_COMBO_ARCHER*4},
    {TRAINERCLASS_EXECUTIVE_ARIANA, ANIM_MUSIC_COMBO_ARIANA*4},
    {TRAINERCLASS_EXECUTIVE_PROTON, ANIM_MUSIC_COMBO_PROTON*4},
    {TRAINERCLASS_EXECUTIVE_PETREL, ANIM_MUSIC_COMBO_PETREL*4},
    {TRAINERCLASS_ROCKET_BOSS, ANIM_MUSIC_COMBO_GIOVANNI*4},
    {TRAINERCLASS_TEAM_ROCKET, ANIM_MUSIC_COMBO_ROCKET_GRUNTS*4},
    {TRAINERCLASS_TEAM_ROCKET_F, ANIM_MUSIC_COMBO_ROCKET_GRUNTS*4},
    {TRAINERCLASS_KIMONO_GIRL, ANIM_MUSIC_COMBO_KIMONO_GIRL*4},
    {TRAINERCLASS_PKMN_TRAINER_RED, ANIM_MUSIC_COMBO_RED*4},
    // (***END OF VANILLA ENTRIES***)
};

struct MonBattleMusic
{
    u16 species:10;
    u16 combo:6;
};

struct MonBattleMusic PokemonBattleMusic[] =
{
    {.species = SPECIES_RAIKOU,   .combo = ANIM_MUSIC_COMBO_RAIKOU},
    {.species = SPECIES_ENTEI,    .combo = ANIM_MUSIC_COMBO_ENTEI},
    {.species = SPECIES_SUICUNE,  .combo = ANIM_MUSIC_COMBO_SUICUNE},
    {.species = SPECIES_LUGIA,    .combo = ANIM_MUSIC_COMBO_LUGIA},
    {.species = SPECIES_HO_OH,    .combo = ANIM_MUSIC_COMBO_HO_OH},
    {.species = SPECIES_GROUDON,  .combo = ANIM_MUSIC_COMBO_WEATHER_TRIO},
    {.species = SPECIES_KYOGRE,   .combo = ANIM_MUSIC_COMBO_WEATHER_TRIO},
    {.species = SPECIES_RAYQUAZA, .combo = ANIM_MUSIC_COMBO_WEATHER_TRIO},
    {.species = SPECIES_MEWTWO,   .combo = ANIM_MUSIC_COMBO_MEWTWO_LATI_TWINS},
    {.species = SPECIES_LATIOS,   .combo = ANIM_MUSIC_COMBO_MEWTWO_LATI_TWINS},
    {.species = SPECIES_LATIAS,   .combo = ANIM_MUSIC_COMBO_MEWTWO_LATI_TWINS},
    // (***END VANILLA ENTRIES***)
};

struct TrainerMusic
{
    u16 class;
    u16 music1;
    u16 music2;
};

struct TrainerMusic sTrainerEncounterMusicParam[] = // cues which music sequence occurs upon eyes meeting
{
    {.class = TRAINERCLASS_YOUNGSTER, .music1 = SEQ_GS_EYE_J_SHOUNEN, .music2 = SEQ_GS_EYE_J_SHOUNEN},
    {.class = TRAINERCLASS_LASS, .music1 = SEQ_GS_EYE_K_SHOUJO, .music2 = SEQ_GS_EYE_K_SHOUJO},
    {.class = TRAINERCLASS_CAMPER, .music1 = SEQ_GS_EYE_J_SHOUNEN, .music2 = SEQ_GS_EYE_J_SHOUNEN},
    {.class = TRAINERCLASS_PICNICKER, .music1 = SEQ_GS_EYE_K_SHOUJO, .music2 = SEQ_GS_EYE_K_SHOUJO},
    {.class = TRAINERCLASS_BUG_CATCHER, .music1 = SEQ_GS_EYE_J_SHOUNEN, .music2 = SEQ_GS_EYE_J_SHOUNEN},
    {.class = TRAINERCLASS_TWINS, .music1 = SEQ_GS_EYE_K_SHOUJO, .music2 = SEQ_GS_EYE_K_SHOUJO},
    {.class = TRAINERCLASS_HIKER, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_FISHERMAN, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_BLACK_BELT, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_POKEFAN_M, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_POKEFAN, .music1 = SEQ_GS_EYE_J_SHOUJO, .music2 = SEQ_GS_EYE_J_SHOUJO},
    {.class = TRAINERCLASS_ACE_TRAINER_M_GS, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_ACE_TRAINER_F_GS, .music1 = SEQ_GS_EYE_J_SHOUJO, .music2 = SEQ_GS_EYE_J_SHOUJO},
    {.class = TRAINERCLASS_BIRD_KEEPER_GS, .music1 = SEQ_GS_EYE_J_SHOUNEN, .music2 = SEQ_GS_EYE_J_SHOUNEN},
    {.class = TRAINERCLASS_JUGGLER, .music1 = SEQ_GS_EYE_J_AYASHII, .music2 = SEQ_GS_EYE_J_AYASHII},
    {.class = TRAINERCLASS_GENTLEMAN, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_BEAUTY, .music1 = SEQ_GS_EYE_J_SHOUJO, .music2 = SEQ_GS_EYE_J_SHOUJO},
    {.class = TRAINERCLASS_POLICEMAN, .music1 = SEQ_GS_EYE_K_SHOUNEN, .music2 = SEQ_GS_EYE_K_SHOUNEN},
    {.class = TRAINERCLASS_SWIMMER_M, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_SWIMMER_F, .music1 = SEQ_GS_EYE_J_SHOUJO, .music2 = SEQ_GS_EYE_J_SHOUJO},
    {.class = TRAINERCLASS_SAILOR, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_KIMONO_GIRL, .music1 = SEQ_GS_EYE_MAIKO, .music2 = SEQ_GS_EYE_MAIKO},
    {.class = TRAINERCLASS_PSYCHIC_M, .music1 = SEQ_GS_EYE_J_SHOUNEN, .music2 = SEQ_GS_EYE_J_SHOUNEN},
    {.class = TRAINERCLASS_GUITARIST, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_TEAM_ROCKET, .music1 = SEQ_GS_EYE_ROCKET, .music2 = SEQ_GS_EYE_ROCKET},
    {.class = TRAINERCLASS_SKIER, .music1 = SEQ_GS_EYE_J_SHOUJO, .music2 = SEQ_GS_EYE_J_SHOUJO},
    {.class = TRAINERCLASS_SCHOOL_KID_M, .music1 = SEQ_GS_EYE_J_SHOUNEN, .music2 = SEQ_GS_EYE_J_SHOUNEN},
    {.class = TRAINERCLASS_TEAM_ROCKET_F, .music1 = SEQ_GS_EYE_ROCKET, .music2 = SEQ_GS_EYE_ROCKET},
    {.class = TRAINERCLASS_BURGLAR, .music1 = SEQ_GS_EYE_J_AYASHII, .music2 = SEQ_GS_EYE_J_AYASHII},
    {.class = TRAINERCLASS_FIREBREATHER, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_BIKER, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_POKE_MANIAC, .music1 = SEQ_GS_EYE_J_AYASHII, .music2 = SEQ_GS_EYE_J_AYASHII},
    {.class = TRAINERCLASS_TEACHER, .music1 = SEQ_GS_EYE_J_SHOUJO, .music2 = SEQ_GS_EYE_J_SHOUJO},
    {.class = TRAINERCLASS_SUPER_NERD, .music1 = SEQ_GS_EYE_J_AYASHII, .music2 = SEQ_GS_EYE_J_AYASHII},
    {.class = TRAINERCLASS_SAGE, .music1 = SEQ_GS_EYE_BOUZU, .music2 = SEQ_GS_EYE_BOUZU},
    {.class = TRAINERCLASS_MEDIUM, .music1 = SEQ_GS_EYE_BOUZU, .music2 = SEQ_GS_EYE_BOUZU},
    {.class = TRAINERCLASS_SCIENTIST_GS, .music1 = SEQ_GS_EYE_ROCKET, .music2 = SEQ_GS_EYE_J_AYASHII},
    {.class = TRAINERCLASS_BOARDER, .music1 = SEQ_GS_EYE_K_AYASHII, .music2 = SEQ_GS_EYE_K_AYASHII},
    {.class = TRAINERCLASS_DOUBLE_TEAM, .music1 = SEQ_GS_EYE_K_SHOUNEN, .music2 = SEQ_GS_EYE_K_SHOUNEN},
    {.class = TRAINERCLASS_YOUNG_COUPLE, .music1 = SEQ_GS_EYE_J_SHOUJO, .music2 = SEQ_GS_EYE_J_SHOUJO},
    {.class = TRAINERCLASS_EXECUTIVE_ARIANA, .music1 = SEQ_GS_EYE_ROCKET, .music2 = SEQ_GS_EYE_ROCKET},
    {.class = TRAINERCLASS_EXECUTIVE_ARCHER, .music1 = SEQ_GS_EYE_ROCKET, .music2 = SEQ_GS_EYE_ROCKET},
    {.class = TRAINERCLASS_EXECUTIVE_PROTON, .music1 = SEQ_GS_EYE_ROCKET, .music2 = SEQ_GS_EYE_ROCKET},
    {.class = TRAINERCLASS_EXECUTIVE_PETREL, .music1 = SEQ_GS_EYE_ROCKET, .music2 = SEQ_GS_EYE_ROCKET},
    // (***END OF VANILLA ENTRIES***)
};
