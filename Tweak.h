
//
// GMOEcoutezController
//
@interface GMOEcoutezController : NSObject
+(id)sharedInstance;
-(void)cancelRecognition;
@end

//
// GMOSearchApplication
//
@interface GMOSearchApplication : NSObject
@property (nonatomic,retain) UIWindow* window;
+ (id)sharedApplication;

// my added methods
- (void)googiriSendResult:(NSString *)text toWebserver:(NSString *)webserver;
@end

//
// GMOVoiceSearchViewController + GMOEcoutezControllerDelegate
//
@protocol GMOEcoutezControllerDelegate
-(void)ecoutezControllerDidCompleteRecognitionWithResult:(id)arg1;
@end
@interface GMOVoiceSearchViewController : UIViewController <GMOEcoutezControllerDelegate>
@end

//
// GMOVoiceRecognitionView
//
@interface GMOVoiceRecognitionView : UIView
- (void)cancelButtonPress:(id)arg1;
@end

//
// GMORootViewController
//
@interface GMORootViewController : UIViewController
@end

//
// CPDistributedMessagingCenter
//
@interface CPDistributedMessagingCenter : NSObject
+ (id)centerNamed:(id)arg1;
- (BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2;
@end

//
// RocketBootstrap
//
#import <RocketBootstrap/rocketbootstrap.h>


//
// SCLAlertView
//
#import "SCLAlertView/SCLAlertView/SCLAlertView.h"

//
// Handlers
//
typedef enum {
    kSiri,
    kGoogle,
    kWebserver
} Handler;
