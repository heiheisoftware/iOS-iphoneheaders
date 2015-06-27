/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <geod/GEOServer.h>

@interface GEODefaultsServer : GEOServer
+(id)_acceptableKeys;
+(id)_acceptableKeysWithCountrySuffixes;
+(id)identifier;
-(void)setDefaultWithMessage:(id)arg1 ;
-(void)registerNetworkDefaultsWithMessage:(id)arg1 ;
-(void)resetAllDefaultsWithMessage:(id)arg1 ;
-(void)countryProvidersDidChangeWithMessage:(id)arg1 ;
-(void)countryCodeDidChangeWithMessage:(id)arg1 ;
@end
