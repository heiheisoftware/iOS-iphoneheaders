/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <routined/RTNotifier.h>

@interface RTDataProtectionManager : RTNotifier {

	BOOL _unlockedSinceBoot;
	int _encryptedDataAvailability;

}

@property (assign,nonatomic) int encryptedDataAvailability;              //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL unlockedSinceBoot;                     //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
+(id)RTDataProtectionManagerLockStateToString:(int)arg1 ;
+(id)RTDataProtectionManagerEncryptedDataAvailabilityToString:(int)arg1 ;
+(id)sharedInstance;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)unlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)setEncryptedDataAvailability:(int)arg1 ;
-(int)encryptedDataAvailability;
-(void)handkeKeybagLockStatusChange:(int)arg1 ;
-(void)handleUnlockedSinceBoot;
-(void)dealloc;
-(id)init;
@end
