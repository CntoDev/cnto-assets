/*
 * simplified uniform defines
 */

#define UNIFORM_SOLDIER(name, base, paa) \
    class name : base { \
        scope = 1; \
        uniformClass = name; \
        hiddenSelections[] = {"camo"}; \
        hiddenSelectionsTextures[] = { paa }; \
    }

#define UNIFORM(name, base, text, paa) \
    class name : base { \
        displayName = text; \
        hiddenSelections[] = {"camo"}; \
        hiddenSelectionsTextures[] =  { paa }; \
        class ItemInfo : ItemInfo { \
            uniformClass = name; \
        }; \
    }
