//
//  NBCDeployStudioSource.h
//  NBICreator
//
//  Created by Erik Berglund on 2015-03-06.
//  Copyright (c) 2015 NBICreator. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NBCApplicationSourceDeployStudio : NSObject

// Source Image
@property NSString *sourceImageOSVersion;

@property BOOL isSupported;
@property BOOL isInstalled;

@property NSBundle *deployStudioAdminBundle;
@property NSBundle *deployStudioAssistantBundle;

// DeployStudio
@property NSString *selectedVersion;
@property NSURL *deployStudioAdminURL;
@property NSURL *deployStudioAssistantURL;
@property NSString *deployStudioAdminVersion;
@property NSString *deployStudioAssistantVersion;
@property NSArray *deployStudioVersionsSupported;
@property NSArray *deployStudioAdminURLs;

// SysBuilder
@property NSURL *deployStudioBackgroundURL;
@property NSURL *sysBuilderFolder;
@property NSURL *sysBuilderScript;
@property NSURL *sysBuilderScriptRp;
@property NSURL *sysBuilderScriptFillVolume;
@property NSURL *sysBuilderScriptBestRecoveryDevice;

// Methods
- (NSString *)expandVariables:(NSString *)string;
+ (NSArray *)deployStudioAdminVersions;

- (NSURL *)urlForDSAdminResource:(NSString *)resource extension:(NSString *)extension;

@end
