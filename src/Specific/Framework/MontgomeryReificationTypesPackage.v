(* This file is autogenerated from MontgomeryReificationTypes.v by remake_packages.py *)
Require Import Crypto.Specific.Framework.CurveParametersPackage.
Require Import Crypto.Specific.Framework.ArithmeticSynthesis.BasePackage.
Require Import Crypto.Specific.Framework.ArithmeticSynthesis.MontgomeryPackage.
Require Import Crypto.Specific.Framework.ReificationTypesPackage.
Require Export Crypto.Specific.Framework.MontgomeryReificationTypes.
Require Import Crypto.Specific.Framework.Packages.
Require Import Crypto.Util.TagList.

Module TAG.
  Inductive tags := meval | feBW_small | feBW_of_feBW_small | phiM | phiM_small.
End TAG.

Ltac add_meval pkg :=
  if_montgomery
    pkg
    ltac:(fun _ => let feBW := Tag.get pkg TAG.feBW in
                   let r := Tag.get pkg TAG.r in
                   let meval := fresh "meval" in
                   let meval := pose_meval feBW r meval in
                   Tag.update pkg TAG.meval meval)
    ltac:(fun _ => pkg)
    ().
Ltac add_feBW_small pkg :=
  if_montgomery
    pkg
    ltac:(fun _ => let sz := Tag.get pkg TAG.sz in
                   let feBW := Tag.get pkg TAG.feBW in
                   let meval := Tag.get pkg TAG.meval in
                   let r := Tag.get pkg TAG.r in
                   let m_enc := Tag.get pkg TAG.m_enc in
                   let feBW_small := fresh "feBW_small" in
                   let feBW_small := pose_feBW_small sz feBW meval r m_enc feBW_small in
                   Tag.update pkg TAG.feBW_small feBW_small)
    ltac:(fun _ => pkg)
    ().
Ltac add_feBW_of_feBW_small pkg :=
  if_montgomery
    pkg
    ltac:(fun _ => let feBW := Tag.get pkg TAG.feBW in
                   let feBW_small := Tag.get pkg TAG.feBW_small in
                   let feBW_of_feBW_small := fresh "feBW_of_feBW_small" in
                   let feBW_of_feBW_small := pose_feBW_of_feBW_small feBW feBW_small feBW_of_feBW_small in
                   Tag.update pkg TAG.feBW_of_feBW_small feBW_of_feBW_small)
    ltac:(fun _ => pkg)
    ().
Ltac add_phiM pkg :=
  if_montgomery
    pkg
    ltac:(fun _ => let feBW := Tag.get pkg TAG.feBW in
                   let m := Tag.get pkg TAG.m in
                   let meval := Tag.get pkg TAG.meval in
                   let montgomery_to_F := Tag.get pkg TAG.montgomery_to_F in
                   let phiM := fresh "phiM" in
                   let phiM := pose_phiM feBW m meval montgomery_to_F phiM in
                   Tag.update pkg TAG.phiM phiM)
    ltac:(fun _ => pkg)
    ().
Ltac add_phiM_small pkg :=
  if_montgomery
    pkg
    ltac:(fun _ => let feBW_small := Tag.get pkg TAG.feBW_small in
                   let feBW_of_feBW_small := Tag.get pkg TAG.feBW_of_feBW_small in
                   let m := Tag.get pkg TAG.m in
                   let meval := Tag.get pkg TAG.meval in
                   let montgomery_to_F := Tag.get pkg TAG.montgomery_to_F in
                   let phiM_small := fresh "phiM_small" in
                   let phiM_small := pose_phiM_small feBW_small feBW_of_feBW_small m meval montgomery_to_F phiM_small in
                   Tag.update pkg TAG.phiM_small phiM_small)
    ltac:(fun _ => pkg)
    ().
Ltac add_MontgomeryReificationTypes_package pkg :=
  let pkg := add_meval pkg in
  let pkg := add_feBW_small pkg in
  let pkg := add_feBW_of_feBW_small pkg in
  let pkg := add_phiM pkg in
  let pkg := add_phiM_small pkg in
  Tag.strip_subst_local pkg.


Module MakeMontgomeryReificationTypesPackage (PKG : PrePackage).
  Module Import MakeMontgomeryReificationTypesPackageInternal := MakePackageBase PKG.

  Ltac get_meval _ := get TAG.meval.
  Notation meval := (ltac:(let v := get_meval () in exact v)) (only parsing).
  Ltac get_feBW_small _ := get TAG.feBW_small.
  Notation feBW_small := (ltac:(let v := get_feBW_small () in exact v)) (only parsing).
  Ltac get_feBW_of_feBW_small _ := get TAG.feBW_of_feBW_small.
  Notation feBW_of_feBW_small := (ltac:(let v := get_feBW_of_feBW_small () in exact v)) (only parsing).
  Ltac get_phiM _ := get TAG.phiM.
  Notation phiM := (ltac:(let v := get_phiM () in exact v)) (only parsing).
  Ltac get_phiM_small _ := get TAG.phiM_small.
  Notation phiM_small := (ltac:(let v := get_phiM_small () in exact v)) (only parsing).
End MakeMontgomeryReificationTypesPackage.
