#import "TTAccessibleView.h"

@class TTTabController, TTView;

@interface TTPane : TTAccessibleView { }

@property (retain) TTTabController *controller;
@property (assign) TTView* view; // @synthesize view;

@end
