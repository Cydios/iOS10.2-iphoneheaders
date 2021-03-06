/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, NSNumber;


@protocol INStartWorkoutIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * workoutName; 
@property (nonatomic,copy) NSNumber * goalValue; 
@property (assign,nonatomic) long long workoutGoalUnitType; 
@property (assign,nonatomic) long long workoutLocationType; 
@property (nonatomic,copy) NSNumber * isOpenEnded; 
@required
-(id)init;
-(NSNumber *)goalValue;
-(void)setGoalValue:(id)arg1;
-(long long)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(long long)arg1;
-(long long)workoutLocationType;
-(void)setWorkoutLocationType:(long long)arg1;
-(void)setWorkoutName:(id)arg1;
-(INSpeakableString *)workoutName;
-(void)setIsOpenEnded:(id)arg1;
-(NSNumber *)isOpenEnded;

@end

