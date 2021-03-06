/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {

	NSString* _accountName;
	NSArray* _emailAddresses;
	NSString* _facebookUserID;
	NSNumber* _iCloudUserID;
	unsigned short _numberOfRequests;
	unsigned short _numberOfTurns;
	unsigned short _numberOfChallenges;

}
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(void)setAccountName:(id)arg1 ;
-(BOOL)isLocalPlayer;
-(BOOL)isUnderage;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfChallenges;
-(unsigned short)numberOfTurns;
-(int)defaultFamiliarity;
-(BOOL)isFriend;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(BOOL)isPurpleBuddyAccount;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(BOOL)isFindable;
-(void)setFindable:(BOOL)arg1 ;
-(BOOL)isPhotoPending;
-(void)setPhotoPending:(BOOL)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(id)accountName;
@end

