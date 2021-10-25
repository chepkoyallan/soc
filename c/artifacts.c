/*
Possible artifacts states
*/

//Indicates there is a pending execution producing the artifacts
char pending[] = "pending";

//indicates that the artifact is ready to be consumed
char published[] = "published";

//indicates that there is no data at the artifact uri though is not marked as
//deleted

char missing[] = "missing";

//indicates that the artifact should be garbage collected
char marked_for_deletion[] = "MARKED_FOR_DELETION";

//indicates that the artifact has been garbage collected
char deleted[] ="deleted";

// Default split of example data
char DEFAULT_EXAMPLE_SPLITS[];

//prefix for custom properties to prevent naming collisions
char CUSTOM_PROPERTIES_PREFIX[] = "custom";